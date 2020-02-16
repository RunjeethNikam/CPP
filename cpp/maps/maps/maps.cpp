#include "pch.h"
#include <iostream>
#include<unordered_map>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long sum = 0;
	vector<int> A(n+5, 0);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		sum += A[i];
	}
	if (sum & 1) {
		cout << "NO\n";
		return 1;
	}
	map<long long, int> first, second;
	first[A[0]] = 1;
	for (int i = 1; i < n; i++) {
		second[A[i]]++;
	}
	long long sdash = 0;
	for (int i = 0; i < n; i++) {
		sdash += A[i];
		if (sdash == sum / 2) {
			cout << "YES\n";
			return 1;
		}
		else if (sdash < sum / 2) {
			long long x = sum / 2 - sdash;
			if (second[x] > 0) {
				cout << "YES\n";
				return 1; 
			}
		}
		else {
			long long x = sdash - sum / 2;
			if (first[x] > 0) {
				cout << "YES\n";
				return  1;
			}
		}
		first[A[i + 1]]++;
		second[A[i + 1]]--;

	}
	cout << "NO\n";
}
