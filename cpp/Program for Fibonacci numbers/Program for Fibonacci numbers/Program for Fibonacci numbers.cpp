#include"pch.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<string>

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

int fib1(int n) {
	vector<int> f(n + 2);
	int i;
	f[0] = 0;
	f[1] = 1;
	for (i = 2; i <= n; i++) {
		cout << f[i - 1] << " " << f[i - 2] << endl;
		f[i] = f[i - 1] + f[i - 2];
	}
	for (int cha : f) {
		cout << cha << " ";
	}
	return f[n];
}

int main() {
	int n = 9;
	int x = fib1(n);
	cout << x;
}
