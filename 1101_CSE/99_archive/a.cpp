#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    string out;
    while (T--) {
        ll N, K, S;
        string target;
        cin >> N >> K >> S >> target;
        ll M = K + 1;

        if (target == "Alice") {
            if (S < N) {
                out += "-1\n";
            } else if (S == N) {
                if (N % M == 0) {
                    out += "-1\n";
                } else {
                    for (ll i = 0; i < N; i++) {
                        out += '1';
                        out += (i + 1 < N ? ' ' : '\n');
                    }
                }
            } else {
                out += to_string(S - N + 1);
                for (ll i = 1; i < N; i++) out += " 1";
                out += '\n';
            }
        } else {
            if (S % M != 0 || N < M) {
                out += "-1\n";
                continue;
            }
            ll Tt = S / M;      // sum d_b * 2^b = Tt
            ll D = N / M;       // d_b <= D  (since c_b <= N)
            vector<ll> d;
            ll cnt = 0;         // sum of d_b, maximised greedily from the low bits
            while (Tt > 0) {
                ll m = min(D, Tt);
                if ((m & 1) != (Tt & 1)) m--;
                d.push_back(m);
                cnt += m;
                Tt = (Tt - m) / 2;
            }
            // need sum c_b = M * cnt >= N so that every pile gets at least one bit
            if (cnt < (N + M - 1) / M) {
                out += "-1\n";
                continue;
            }
            vector<ll> a(N, 0);
            ll p = 0;
            for (size_t b = 0; b < d.size(); b++) {
                ll c = d[b] * M;
                for (ll i = 0; i < c; i++) {
                    a[(p + i) % N] |= (1LL << b);
                }
                p = (p + c) % N;
            }
            for (ll i = 0; i < N; i++) {
                out += to_string(a[i]);
                out += (i + 1 < N ? ' ' : '\n');
            }
        }
    }
    cout << out;
    return 0;
}