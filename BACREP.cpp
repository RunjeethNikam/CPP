// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int
// int main(int argc, char const *argv[])
// {
    
//     freopen("/mnt/d/cpp/inputf.in", "r", stdin);
//     freopen("/mnt/d/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);    
//     lli N, Q;
//     cin>>N>>Q;
//     vector<vector<lli>> tree(N, vector<lli> (1,0));
//     for(int i = 1;i<= (N-1);i++){
//         lli x, y;
//         cin>>x>>y;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define sz 500200
#define next nnext
#define sum ssum
typedef long long ll;

template <class Q> void gi(Q &x) {char ch = getchar(); x = 0; while (ch < '0' || ch > '9') ch = getchar(); while (ch >= '0' && ch <= '9') x = x * 10 + ch - 48, ch = getchar();}
template <class Q> void pi(Q x) {if (x > 9) pi(x / 10); putchar(x % 10 + 48);}
char gc() {char ch = getchar(); while (ch != '+' && ch != '?') ch = getchar(); return ch;}

int n, q;
int node[sz], next[sz << 1], to[sz << 1], e;
void ins(int x, int y) {e++; next[e] = node[x]; node[x] = e; to[e] = y;}
int dep[sz], par[sz];
bool isleaf[sz];
int seq[sz], I, st[sz], ed[sz];

void dfs(int x, int p) {
  seq[st[x] = ++I] = x;
  for (int j = node[x]; j; j = next[j])
    if (to[j] != p) {
      par[to[j]] = x; dep[to[j]] = dep[x] + 1; isleaf[x] = 0;
      dfs(to[j], x);
    }
  ed[x] = I;
}

void init() {
  int i, u, v, k;
  gi(n); gi(q);
  for (i = 1; i < n; i++) {
    gi(u); gi(v);
    ins(u, v); ins(v, u);
  }
  for (i = 1; i <= n; i++) isleaf[i] = 1;
  dfs(1, -1);
}

char qc[sz << 1];
int qv[sz << 1], qk[sz << 1];
int qtm[sz << 1], next2[sz << 1], to2[sz << 1], e2;
void ins2(int x, int y) {e2++; next2[e2] = qtm[x]; qtm[x] = e2; to2[e2] = y;}

ll a1[sz], a2[sz], ans[sz];
void add(ll *a, int x, int y) {for (; x <= n; x += x & -x) a[x] += y;}
ll sum(ll *a, int x) {ll s = 0; for (; x; x -= x & -x) s += a[x]; return s;}
#define ADD(a, l, r, y) add(a, l, y), add(a, r + 1, -y)

void query() {
  int i, j, k;
  for (i = 1; i <= n; i++) {
    qc[i] = '+'; qv[i] = i; gi(qk[i]);
    ins2(n - dep[i], i);
  }
  for (i = 1; i <= q; i++) {
    qc[j = i + n] = gc();
    if (qc[j] == '+') gi(qv[j]), gi(qk[j]);
    else gi(qv[j]);
    ins2(n + i - dep[qv[j]], j);
  }
  for (i = 1; i <= n + q; i++) {
    for (j = qtm[i]; j; j = next2[j]) {
      k = to2[j];
      if (qc[k] == '+')
        ADD(a1, st[qv[k]], ed[qv[k]], qk[k]),
          ADD(a2, st[qv[k]], ed[qv[k]], qk[k]);
    }
    for (j = qtm[i]; j; j = next2[j]) {
      k = to2[j];
      if (qc[k] == '?') {
        if (isleaf[qv[k]]) ans[k - n] = sum(a2, st[qv[k]]);
        else ans[k - n] = sum(a1, st[qv[k]]);
      }
    }
    for (j = qtm[i]; j; j = next2[j]) {
      k = to2[j];
      if (qc[k] == '+') ADD(a1, st[qv[k]], ed[qv[k]], -qk[k]);
    }
  }
  for (i = 1; i <= q; i++)
    if (qc[i + n] == '?') pi(ans[i]), putchar('\n');
}

int main() {
    
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    init(); query();
    return 0;}