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
	string given1;
	cin >> given1;
	lli count = 0;
	for (lli i = 0; i < given1.size(); i += 3) {
		if (given1[i] != 'S') {
			count++;
		}
		if (given1[i+1] != 'O') {
			count++;
		}
		if (given1[i + 2] != 'S') {
			count++;
		}

	}
	cout << count;
}
