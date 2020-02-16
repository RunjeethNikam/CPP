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
	lli number_string;
	cin >> number_string;
	vector<string> given;
	for (lli i = 0; i < number_string; i++) {
		string element;
		cin >> element;
		given.push_back(element);
	}
	map<char, int> weight;
	for (string element : given) {
		set<char> x(element.begin(), element.end());
		for (auto i = x.begin(); i != x.end(); i++) {
			weight[*i]++;
		}
	}
	lli count = 0;
	for (auto i = weight.begin(); i != weight.end(); i++) {
		if (i->second == number_string) {
			count++;
		}
	}
	cout << count;
}
