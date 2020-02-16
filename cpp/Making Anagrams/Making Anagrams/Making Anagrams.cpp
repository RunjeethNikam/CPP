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
	string s1, s2;
	cin >> s1 >> s2;
	lli count[26];
	for (lli i = 0; i < 26; i++) {
		count[i] = 0;
	}
	for (lli i = 0; i < s1.size(); i++)
		count[s1[i] - 'a']++;
	for (lli i = 0; i < s2.size(); i++)
		count[s2[i] - 'a']--;
	lli ans = 0;
	for (lli i = 0; i < 26; i++) {
		ans += abs(count[i]);
	}
	cout << ans;
}
