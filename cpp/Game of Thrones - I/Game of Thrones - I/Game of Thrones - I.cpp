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
	string given;
	cin >> given;
	lli count[26];
	for (int i = 0; i < 26; i++)
		count[i] = 0;
	for (int i = 0; i < given.size(); i++) {
		count[given[i] - 'a']++;
	}
	int sum = 0;
	for (lli i = 0; i < 26; i++) {
		sum = sum + (count[i] % 2);
	}
	if (sum >= 2) {
		cout << "NO" << endl;
	}
	else
		cout << "YES" << endl;
	return 0;
}
