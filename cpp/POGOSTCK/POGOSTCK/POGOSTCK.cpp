#include "pch.h"
#include <iostream>
#include<algorithm>


using namespace std;
const int maxN = 1e6 + 10;
long long d[maxN], f[maxN];
int a[maxN];
int sum = 0;
//
//void solve() {
//	int n, k;
//	cin >> n >> k;
//	sum += n;
//	for (int i = 0; i < max(n, k); i++) {
//		d[i] = 0;
//		f[i] = -(1e10);
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		if (i - k >= 0)
//			d[i] = d[i - k] + a[i];
//		else
//			d[i] = a[i];
//		f[i%k] = d[i];
//	}
//	long long ans = -1e10;
//	for (int i = 0; i < min(n, k); i++) {
//		ans = max(ans, f[i]);
//	}
//	for (int i = 0; i < n - k; i++) {
//		ans = max(ans, f[i%k] - d[i]);
//	}
//	cout << ans;
//}
//


int main()
{
	int t;
	cin >> t;
	while (t--) {
		//solve();
		long long int n, r;
		cin >> n >> r;
		for (long long int i = 0; i < n; i++) {
			cin >> d[i];

		}
		for (long long int i = n - 1; i >= 0; i--) {
			if (i + r >= n) {
				f[i] = d[i];
			}
			else
				f[i] = f[i + r] + d[i];
		}
		long long int ans = -(1e10);
		for (int i = 0; i < n; i++) {
			ans = max(f[i], ans);
		}
		cout << ans<<endl;
	}
}