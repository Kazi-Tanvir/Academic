#include <bits/stdc++.h>
using namespace std;

static const int INF = 1000000000;

vector<int> zfunc(const string &s) {
    int n = s.size();
    vector<int> z(n, 0);
    for (int i = 1, l = 0, r = 0; i < n; i++) {
        if (i < r) z[i] = min(r - i, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
        if (i + z[i] > r) l = i, r = i + z[i];
    }
    return z;
}

// Suffix automaton with linked-list edges (memory friendly)
struct SAM {
    vector<int> link, len, head;
    vector<int> enext, eto;
    vector<char> ech;
    int last;
    int newState(int l) {
        link.push_back(-1); len.push_back(l); head.push_back(-1);
        return (int)len.size() - 1;
    }
    int getEdge(int v, char c) {
        for (int e = head[v]; e != -1; e = enext[e])
            if (ech[e] == c) return e;
        return -1;
    }
    void addEdge(int v, char c, int to) {
        enext.push_back(head[v]); eto.push_back(to); ech.push_back(c);
        head[v] = (int)eto.size() - 1;
    }
    void init(int k) {
        link.reserve(2 * k + 2); len.reserve(2 * k + 2); head.reserve(2 * k + 2);
        enext.reserve(3 * k + 5); eto.reserve(3 * k + 5); ech.reserve(3 * k + 5);
        last = newState(0);
    }
    void extend(char c) {
        int cur = newState(len[last] + 1);
        int p = last;
        while (p != -1 && getEdge(p, c) == -1) {
            addEdge(p, c, cur);
            p = link[p];
        }
        if (p == -1) link[cur] = 0;
        else {
            int e = getEdge(p, c);
            int q = eto[e];
            if (len[p] + 1 == len[q]) link[cur] = q;
            else {
                int cl = newState(len[p] + 1);
                link[cl] = link[q];
                for (int x = head[q]; x != -1; x = enext[x]) addEdge(cl, ech[x], eto[x]);
                while (p != -1) {
                    int e2 = getEdge(p, c);
                    if (e2 == -1 || eto[e2] != q) break;
                    eto[e2] = cl;
                    p = link[p];
                }
                link[q] = link[cur] = cl;
            }
        }
        last = cur;
    }
};

int main() {
    int t;
    scanf("%d", &t);
    static char buf[1000005];
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        scanf("%s", buf);
        string T(buf);
        scanf("%s", buf);
        string P(buf);

        // za[l]: longest prefix of P matching T starting at l (1-based)
        vector<int> za(n + 2, 0), cs(n + 2, 0), lenG(n + 2, 0);
        {
            string s = P + "#" + T;
            vector<int> z = zfunc(s);
            for (int l = 1; l <= n; l++) za[l] = min(z[k + l], k);
        }
        {
            string rP(P.rbegin(), P.rend()), rT(T.rbegin(), T.rend());
            string s = rP + "#" + rT;
            vector<int> z = zfunc(s);
            for (int r = 1; r <= n; r++) cs[r] = min(z[k + 1 + (n - r)], k);
        }
        {
            SAM sam;
            sam.init(k);
            for (char c : P) sam.extend(c);
            int v = 0, l = 0;
            for (int i = 1; i <= n; i++) {
                char c = T[i - 1];
                while (v != 0 && sam.getEdge(v, c) == -1) {
                    v = sam.link[v];
                    l = sam.len[v];
                }
                int e = sam.getEdge(v, c);
                if (e != -1) { v = sam.eto[e]; l++; }
                else { v = 0; l = 0; }
                lenG[i] = l;
            }
        }

        vector<int> g0(n + 1, INF), g1(n + 1, INF), tmp0(n + 2, INF), val(n + 2, INF);
        g0[0] = 0;
        vector<int> dqG(n + 2), dqB(n + 2);
        int gh = 0, gt = 0, bh = 0, bt = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> heapA;

        for (int r = 1; r <= n; r++) {
            int l = r;
            int p0 = g0[l - 1];
            int pany = min(g0[l - 1], g1[l - 1]);
            val[l] = p0;

            if (za[l] > 0 && pany < INF) {
                heapA.push({pany + 1, l + za[l] - 1});
                if (za[l] >= k) tmp0[l + k - 1] = min(tmp0[l + k - 1], pany + 1);
            }

            while (gt > gh && val[dqG[gt - 1]] >= val[l]) gt--;
            dqG[gt++] = l;
            while (bt > bh && val[dqB[bt - 1]] >= val[l]) bt--;
            dqB[bt++] = l;

            int aG = r - lenG[r] + 1;
            int aB = r - cs[r] + 1;
            while (gt > gh && dqG[gh] < aG) gh++;
            while (bt > bh && dqB[bh] < aB) bh++;

            int genv = (gt > gh) ? val[dqG[gh]] + 1 : INF;
            int Bv = (bt > bh) ? val[dqB[bh]] + 1 : INF;

            while (!heapA.empty() && heapA.top().second < r) heapA.pop();
            int hv = heapA.empty() ? INF : heapA.top().first;

            int sb = INF;
            if (cs[r] >= k) {
                int l2 = r - k + 1;
                sb = min(g0[l2 - 1], g1[l2 - 1]) + 1;
            }

            if (r < n) {
                g1[r] = min(INF, min(genv, hv));
                g0[r] = min(INF, min(Bv, min(sb, tmp0[r])));
            } else {
                g0[r] = min(INF, min(min(genv, hv), min(Bv, min(sb, tmp0[r]))));
                g1[r] = INF;
            }
        }
        printf("%d\n", g0[n] >= INF ? -1 : g0[n]);
    }
    return 0;
}