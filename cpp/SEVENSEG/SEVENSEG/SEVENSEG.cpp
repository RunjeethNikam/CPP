#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<assert.h>
using namespace std;
int mask[10] = { 119, 36, 93, 109, 46, 107, 123, 37, 127, 111 };
int n;
int x[11], y[11];

int check(int msk) {
	for (int i = 1; i <= n; i++) {
		int bed = 0;
		for (int j = 0; j < 7; j++)
			if ((mask[x[i]] & (1 << j)) && !(msk&(1 << j))) bed++;
		if (bed != y[i])
			return false;
	}
	return true;
}

int popcount(int i) {
	if (i == 0)
		return 0;
	else
		return (1 + popcount(i&(i - 1)));
}

void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i <= n; i++) {
			cin >> x[i] >> y[i];
		}
		int ok = 0;
		int mini = 10;
		int maxi = 0;
		for (int i = 0; i < 1 << 7; i++)
			if (check(i)) {
				if (!ok) {
					ok = 1;
					mini = popcount(i);
					maxi = mini;
				}
				else {
					mini = min(mini, popcount(i));
					maxi = max(maxi, popcount(i));
				}
			}
		if (!ok)
			cout << "invalid";
		else
			cout << mini << " " << maxi;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
