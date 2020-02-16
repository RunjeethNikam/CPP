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
	lli size;
	cin >> size;
	vector<lli> given(size);
	map<lli, lli> wt;
	for (lli i = 0; i < size; i++) {
		cin >> given[i];
		wt[given[i]]++;
	}
	lli k;
	cin >> k;
	for (lli i = 0; i < size; i++) {
		lli complement;
		complement = k - given[i];
		wt[given[i]]--;
		if (wt[complement] > 0) {
			cout << "found it";
			break;
		}
	}
}
