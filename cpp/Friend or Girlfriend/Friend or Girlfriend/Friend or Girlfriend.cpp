#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	long long int test;
	cin >> test;
	while (test--) {
		long long int size;
		cin >> size;
		string t;
		cin >> t;
		char x;
		cin >> x;
		long long int res = 0;
		long long int last_occured = -1;
		for (int i = 0; i < t.size(); i++) {
			if (t[i] == x) {
				res += i + 1;
				last_occured = i +1;
			}
			else {
				if (last_occured != -1) {
					res += last_occured;
				}
			}
		}
		cout << res << endl;
	}
}