#include<algorithm>
#include<vector>
#include<stack>
#include<string>
#include"pch.h"
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
	string given;
	cin >> given;
	lli k;
	cin >> k;
	for (int i = 0; i < given.size(); i++) {
		if (given[i] != '-') {
			if (given[i] >= 'a' && given[i] <= 'z') {
				int x = (given[i] - 'a' + k) % 26;
				given[i] = 'a' + x;
			}
			else if (given[i] >= 'A' && given[i] <= 'Z') {
				int x = (given[i] - 'A' + k) % 26;
				given[i] = 'A' + x;
			}
		}
	}
	cout << given;
}
