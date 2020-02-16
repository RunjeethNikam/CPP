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
int power(int x, int a) {
	int res = 1;
	while (a) {
		if (a & 1)
			res = res * x;
		x = x * x;
		a >>= 1;
	}
	return res;
}
int breakInteger(int N) {
	if (N == 2)
		return 1;
	if (N == 3)
		return 2;
	int maxProduct;
	switch (N % 3) {
		case 0:
			maxProduct = power(3, N / 3);
			break;
		case 1:
			maxProduct = 2 * 2 * power(3, (N / 3) - 1);
			break;
		case 2:
			maxProduct = 2 * power(3, N / 3);
			break;
	}
	return maxProduct;
}
int main() {
	int  maxProduct = breakInteger(10);
	cout << maxProduct << endl;
	return 0;
}
