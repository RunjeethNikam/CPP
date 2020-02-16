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
bool Palindrome(string given, lli index) {
	bool flag = false;
	//if(index != -1)
	//given.erase(index, 1);
	for (lli i = 0; i < given.size() / 2; i++) {
		if (!flag) {
			flag = true;
			if (given[i] != given[given.size() - i - 1]) {
				return false;
			}
		}

	}
	return flag;
}
int main() {
	lli testcases;
cin >> testcases;
	while (testcases--) {
		string given;
		cin >> given;
		int i;
		for (i = 0; i < given.size() / 2; i++)
			if (given[i] != given[given.size() - i - 1])
				break;
		if (i == given.size() / 2) {
			if (given.size() % 2 == 1) {
				cout << given.size() / 2;
				continue;
			}
		}
		lli j = given.size() - i - 1;
		lli x, y;
		for (x = i + 1, y = j; x < y; x++, y--)
			if (given[x] != given[y])
				break;
		if (x >= y)
			cout << i;
		else {
			for (x = i, y = j - 1; x < y; x++, y--)
				if (given[x] != given[y])
					break;
			if (x >= y)
				cout << j;
			else
				cout << "-1";
		}
	}
}
