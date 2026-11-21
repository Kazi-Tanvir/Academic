#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_N 1000006
#define INF 1000000000

int zArr[2 * MAX_N];
void zFunc(char *s, int len, int *z){
    z[0] = len;
    int l = 0, r = 0;
    for(int i = 1; i < len; i++){
        z[i] = 0;
        if(i < r) z[i] = z[i - l] < r - i ? z[i - l] : r - i;
        while(i + z[i] < len && s[z[i]] == s[i + z[i]]) z[i]++;
        if(i + z[i] > r){ l = i; r = i + z[i]; }
    }
}

typedef struct{
    int len, link;
    int next[26];
} SamNode;

#define MAX_SAM (2 * MAX_N)
SamNode sam[MAX_SAM];
int samSz, samLast;

void samInit(){
    sam[0].len = 0;
    sam[0].link = -1;
    for(int i = 0; i < 26; i++) sam[0].next[i] = -1;
    samSz = 1;
    samLast = 0;
}

void samExtend(int c){
    int cur = samSz++;
    sam[cur].len = sam[samLast].len + 1;
    sam[cur].link = -1;
    for(int i = 0; i < 26; i++) sam[cur].next[i] = -1;
    int p = samLast;
    while(p != -1 && sam[p].next[c] == -1){
        sam[p].next[c] = cur;
        p = sam[p].link;
    }
    if(p == -1){
        sam[cur].link = 0;
    } else {
        int q = sam[p].next[c];
        if(sam[p].len + 1 == sam[q].len){
            sam[cur].link = q;
        } else {
            int cl = samSz++;
            sam[cl] = sam[q];
            sam[cl].len = sam[p].len + 1;
            while(p != -1 && sam[p].next[c] == q){
                sam[p].next[c] = cl;
                p = sam[p].link;
            }
            sam[q].link = cl;
            sam[cur].link = cl;
        }
    }
    samLast = cur;
}

char bufT[MAX_N], bufP[MAX_N];
char concat[3 * MAX_N];

int zt[MAX_N];
int zs[MAX_N];
int la[MAX_N];

int dp0[MAX_N];
int dp1[MAX_N];

int dqS[MAX_N], dqSHead, dqSTail;
int dqA[MAX_N], dqAHead, dqATail;

typedef struct{
    int cost, reach;
} HeapNode;

HeapNode heap[MAX_N];
int heapSz;

void heapPush(int cost, int reach){
    int i = heapSz++;
    heap[i].cost = cost;
    heap[i].reach = reach;
    while(i > 0){
        int par = (i - 1) / 2;
        if(heap[par].cost > heap[i].cost || (heap[par].cost == heap[i].cost && heap[par].reach > heap[i].reach)){
            HeapNode tmp = heap[par];
            heap[par] = heap[i];
            heap[i] = tmp;
            i = par;
        } else break;
    }
}

void heapPop(){
    heap[0] = heap[--heapSz];
    int i = 0;
    while(1){
        int l = 2*i+1, r = 2*i+2, sm = i;
        if(l < heapSz && (heap[l].cost < heap[sm].cost || (heap[l].cost == heap[sm].cost && heap[l].reach < heap[sm].reach))) sm = l;
        if(r < heapSz && (heap[r].cost < heap[sm].cost || (heap[r].cost == heap[sm].cost && heap[r].reach < heap[sm].reach))) sm = r;
        if(sm == i) break;
        HeapNode tmp = heap[sm];
        heap[sm] = heap[i];
        heap[i] = tmp;
        i = sm;
    }
}

int minVal(int a, int b){ return a < b ? a : b; }

void pushJ(int j, int n){
    int m = minVal(dp0[j], dp1[j]);
    while(dqSHead < dqSTail && minVal(dp0[dqS[dqSTail-1]], dp1[dqS[dqSTail-1]]) >= m) dqSTail--;
    dqS[dqSTail++] = j;
    while(dqAHead < dqATail && dp1[dqA[dqATail-1]] >= dp1[j]) dqATail--;
    dqA[dqATail++] = j;
    if(j < n && m < INF && zt[j] > 0) heapPush(m, j + zt[j]);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        scanf("%s", bufT);
        scanf("%s", bufP);

        int concatLen = 0;
        for(int i = 0; i < k; i++) concat[concatLen++] = bufP[i];
        concat[concatLen++] = '#';
        for(int i = 0; i < n; i++) concat[concatLen++] = bufT[i];
        concat[concatLen] = '\0';

        int *z1 = (int*)malloc(concatLen * sizeof(int));
        zFunc(concat, concatLen, z1);
        for(int i = 0; i < n; i++){
            zt[i] = z1[k + 1 + i];
            if(zt[i] > k) zt[i] = k;
        }
        free(z1);

        concatLen = 0;
        for(int i = k - 1; i >= 0; i--) concat[concatLen++] = bufP[i];
        concat[concatLen++] = '#';
        for(int i = n - 1; i >= 0; i--) concat[concatLen++] = bufT[i];
        concat[concatLen] = '\0';

        int *z2 = (int*)malloc(concatLen * sizeof(int));
        zFunc(concat, concatLen, z2);
        for(int r = 1; r <= n; r++){
            zs[r] = z2[k + 1 + (n - r)];
            if(zs[r] > k) zs[r] = k;
        }
        free(z2);

        samInit();
        for(int i = 0; i < k; i++) samExtend(bufP[i] - 'a');

        int v = 0, l = 0;
        for(int r = 1; r <= n; r++){
            int c = bufT[r-1] - 'a';
            while(v != 0 && sam[v].next[c] == -1){ v = sam[v].link; l = sam[v].len; }
            if(sam[v].next[c] != -1){ v = sam[v].next[c]; l++; }
            else { v = 0; l = 0; }
            la[r] = l;
        }

        for(int i = 0; i <= n; i++){ dp0[i] = INF; dp1[i] = INF; }
        dp1[0] = 0;

        dqSHead = dqSTail = 0;
        dqAHead = dqATail = 0;
        heapSz = 0;

        pushJ(0, n);

        for(int r = 1; r <= n; r++){
            int lo = r - zs[r];
            while(dqSHead < dqSTail && dqS[dqSHead] < lo) dqSHead++;
            if(zs[r] > 0 && dqSHead < dqSTail){
                int j = dqS[dqSHead];
                int m = minVal(dp0[j], dp1[j]);
                if(m < INF) dp1[r] = m + 1;
            }

            while(heapSz > 0 && heap[0].reach < r) heapPop();
            if(heapSz > 0) dp0[r] = minVal(dp0[r], heap[0].cost + 1);

            int lo2 = r - la[r];
            while(dqAHead < dqATail && dqA[dqAHead] < lo2) dqAHead++;
            if(la[r] > 0 && dqAHead < dqATail && dp1[dqA[dqAHead]] < INF)
                dp0[r] = minVal(dp0[r], dp1[dqA[dqAHead]] + 1);

            pushJ(r, n);
        }

        int ans = minVal(dp0[n], dp1[n]);
        printf("%d\n", ans >= INF ? -1 : ans);
    }
    return 0;
}
