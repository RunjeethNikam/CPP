// charged up array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
//#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		long long* arr = new (long long [N]);
		for (int i = 0; i < N; i++)
			cin >> arr[i];
		if (N >= 64)
			cout << 0 << endl;
		else
		{
			long long val = (1ll << (N - 1));
			cout << val;
			long long ans = 0;
			for (int i = 0; i < N; i++)
				if (arr[i] >= val)
					ans = (ans + arr[i] % M) % M;
			cout << ans << endl;
		}
	}

	cout << endl << (1 << 2);
}