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
const int maxn = 1e5 + 42;
vector<int> g[maxn];
int x;
int A[maxn];

void init() {
	for (int i = 0; i < maxn; i++) {
		g[i].clear();
	}
}

int dfs(int v = 1, int p = 1) {
	int res = 0;
	for (auto u : g[v]) {
		cout << u << endl;
		if (u != p) {
			res += dfs(u, v);
		}
	}
	return max(A[v] + res, -x);
}

void solve() {
	init();
	int n;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (int i = 1; i < n; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	cout << dfs() << endl;
}


int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}