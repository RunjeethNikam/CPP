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
	int count[26];
	while (testcases--) {
		for (int i = 0; i < 26; i++)
			count[i] = 0;
		string given;
		cin >> given;
		if (given.size() & 1) {
			cout << "-1"<<endl;
		}
		else {
			for (int i = 0; i < given.size() / 2; i++)
				count[given[i] - 'a']++;
			for (int i = given.size()/2; i < given.size(); i++)
				count[given[i] - 'a']--;
			lli ans = 0;
			for (lli i = 0; i < 26; i++) {
				ans += abs(count[i]);
			}
			ans = ans / 2;
			cout << ans << endl;
		}
	}
}
