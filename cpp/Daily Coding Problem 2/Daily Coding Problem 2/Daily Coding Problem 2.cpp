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
	lli product = 1;
	bool flag = false;
	vector<lli> given(size);
	// we have to take care of the conner cases 
	// like dividing with zero.
	for (lli i = 0; i < size; i++) {
		cin >> given[i];
		if(given[i] != 0)
		product *= given[i];
		if (given[i] == 0)
			flag = true;
	}
	for (lli i = 0; i < size; i++) {
		if (flag) {
			if (given[i] == 0)
				cout << product << endl;
			else
				cout << "0" << endl;
		}
		else
			cout << product / given[i] << endl;
	}
}
