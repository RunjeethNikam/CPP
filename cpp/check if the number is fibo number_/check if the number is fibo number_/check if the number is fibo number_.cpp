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
bool isPerfertSquare(int x) {
	int s = sqrt(x);
	return (s*s == x);

}
bool isFibonacci(int x) {
	return isPerfertSquare(5 * x*x + 4) || isPerfertSquare(5 * x*x - 4);
}
int main() {
	lli testcases;
	cin >> testcases;
	while (testcases--)
	{
		lli given;
		cin >> given;
		cout << isFibonacci(given);
	}
}
