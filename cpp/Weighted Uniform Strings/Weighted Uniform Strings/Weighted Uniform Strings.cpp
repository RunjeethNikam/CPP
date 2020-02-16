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
#include<unordered_map>
using namespace std;
#define lli long long int
int main() {
	map<char, int> weight;
	for (int i = 0; i < 26; i++) {
		weight['a' + i] = i + 1;
	}
	string given;
	cin >> given;
	set<int> umap;
	int count = 1;
	umap.insert(weight[given[0]]);
	for (int i = 1; i < given.size(); i++) {
		if (given[i] != given[i - 1]) {
			count = 1;
			//cout << weight[given[i]] << endl;
			umap.insert(weight[given[i]] * count);
		}
		else {
			count++;
			umap.insert(weight[given[i]] * count);
		}
	}
	lli no;
	cin >> no;
	while (no--) {
		lli num;
		cin >> num;
		if (umap.find(num) != umap.end()) {
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}

}
