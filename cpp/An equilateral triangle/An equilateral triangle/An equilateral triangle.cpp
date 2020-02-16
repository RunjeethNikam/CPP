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
	lli side;
	lli count = 1;
	cin >> side;
	if (side == 2 || side == 1) {
		cout << 0;
	}
	else {
			for (lli i = 1, j = side - 2; i <= ceil(side/2)-1 && j>=0; i++, j--) {
				count += ((i)*(i + 1)*(j)*(j + 1)) / 4;
			}
	cout << count;
	}
}
