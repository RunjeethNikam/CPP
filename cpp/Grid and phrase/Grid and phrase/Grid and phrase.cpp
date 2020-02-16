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
	lli n, m;
	cin >> n >> m;
	vector<string> given;
	for (lli i = 0; i < n; i++) {
		string element;
		cin >> element;
		given.push_back(element);
	}
	lli count = 0;
	for (int i = 0; i < given.size(); i++) {
		for (int j = 0;j < given[i].size(); j++) {
			if (given[i][j] == 's') {
				if (given[i].size() - j >= 4) { // forward diagonal
					if (given[i][j + 1] == 'a' &&given[i][j + 2] == 'b' &&given[i][j + 3] == 'a')
						count++;
					if(given.size() - i >= 4)// downward diagonal
						if (given[i + 1][j + 1] == 'a' &&given[i + 2][j + 2] == 'b' &&given[i + 3][j + 3] == 'a')
							count++;
					
				}
				if (i>= 3) {// upward diagonal
					if (given[i - 1][j + 1] == 'a' &&given[i - 2][j + 2] == 'b' &&given[i - 3][j + 3] == 'a')
						count++;
				}
				if (given.size() - i >= 4) {// downward
					if (given[i + 1][j] == 'a' &&given[i + 2][j] == 'b' &&given[i + 3][j] == 'a')
						count++;
				}
			}
		}
	}
	cout << count;
}
