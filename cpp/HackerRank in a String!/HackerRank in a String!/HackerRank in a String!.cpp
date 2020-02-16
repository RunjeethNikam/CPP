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
int main() {
	lli testcases;
	cin >> testcases;
	string temp = "hackerrank";
	while (testcases--) {
		string given;
		cin >> given;
		lli i = 0, j = -1;
		for (int k = 0; k < given.size(); k++) {
			if (given[k] == temp[i] && i < 10) {
				i++;
			}
		}
		if (i == 10) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}
