#include "pch.h"
#include <iostream>
using namespace std;
bool prime(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x%i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int x;
	cin >> x;
	while (x--) {
		long long start, end;
		cin >> start >> end;
		for (int i = start; i <= end; i++) {
			if (i == 1) {
				continue;
			}
			if (prime(i)) {
				cout << i << endl;
			}
		}
		cout << endl;
	}
	return 0;
}