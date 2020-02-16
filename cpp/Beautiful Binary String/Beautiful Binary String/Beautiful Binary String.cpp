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
	string given;
	cin >> given;
	lli count = 0;
	for (lli i = 0; i < given.size(); i++) {
		if (given[i] == '0' && given[i + 1] == '1' && given[i + 2] == '0') {
			given[i + 2] = '1';
			count++;
		}
	}
	cout << count;
}
