#include"pch.h"
#include<algorithm>
#include<vector>
#include<stack>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<utility>
#include<set>
#include<list>
#include <iterator> 
#include<deque>
#include<array>
#include<tuple>
#include<forward_list>
#include<queue>
using namespace std;
#define lli long long int
const int maxn = 1e5 + 42;
vector<int> g[maxn];
int ans[maxn], val[maxn], mod[maxn];
void init() {
	for (int i = 0; i < maxn; i++) {
		g[i].clear();
		ans[i] = -1;
	}
}

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
void dfs(int v = 1, int p = 1, int G = val[1]) {
	for (auto u : g[v]) {
		if (u != p) {
			dfs(u, v, gcd(G, val[u]));
		}
	}
	if (g[v].size() == 1 && v != 1) {
		ans[v] = mod[v] - gcd(mod[v], G);
	}
}
void solve() {
	init();
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		cin >> val[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> mod[i];
	}
	dfs();

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
