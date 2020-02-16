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

uint64_t ToInteger(string& s) {
	istringstream istr(s);
	uint64_t v;
	istr >> v;
	return v;
}


bool CanStartFrom(string& s, string& prefix) {
	if (prefix[0] == '0')
		return false;
	size_t sequenceLenth = 1;
	uint64_t v = ToInteger(prefix);
	string t = prefix;
	while (t.size() < s.size()) {
		sequence += 1;
		v += 1;
		t += ToString(v);
	}
}

bool IsPossible(string& s, lli& startValue) {
	for (size_t prefixSize = 1; prefixSize <= 16; prefixSize++) {
		if (prefixSize > s.size()) {
			break;
		}
		string prefix = s.substr(0, prefixSize);
		if (CanStartFrom(s, prefix)) {
			startValue = ToInteger(prefix);
			return true;
		}
	}
}
int main() {
	lli testcases;
	cin >> testcases;
	while (testcases--) {
		string given;
		cin >> given;
		lli startValue;
		if (IsPossible(given, startValue)) {
			cout << "YES " << startValue << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
