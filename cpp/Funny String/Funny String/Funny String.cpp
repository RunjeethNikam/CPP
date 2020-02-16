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
	while (testcases--) {
		string given;
		cin >> given;
		vector<int> v1, wt;
		for (int i = 0; i < given.size(); i++) {
			v1.push_back(given[i]);
		}
		for (int i = 1; i < given.size(); i++) {
			wt.push_back(abs(given[i] - given[i - 1]));
		}
		vector<int> v2(v1.begin(), v1.end()), wt1;
		
		reverse(v2.begin(), v2.end());
		
		for (int i = 1; i < v2.size(); i++) {
			wt1.push_back(abs(v2[i] - v2[i - 1]));
		}
		if (wt == wt1)
			cout << "Funny";
		else
			cout << "Not Funny";
		cout << endl;
	}
}
