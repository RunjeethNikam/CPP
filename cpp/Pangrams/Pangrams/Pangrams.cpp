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
#include<iterator> 
#include<deque>
#include<array>
#include<tuple>
#include<forward_list>
#include<queue>
using namespace std;
#define lli long long int
int main() {
	string given;
	getline(cin, given);
	set<char> uniqueChar;
	for (int i = 0; i < given.size(); i++) {
		if (given[i] <= 'z' && given[i] >= 'a' || given[i] <= 'Z' && given[i] >= 'A') {
			uniqueChar.insert((char)tolower(given[i]));
		}
	}
	if (uniqueChar.size() == 26)
		cout << "pangram";
	else
		cout << "not pangram";
}
