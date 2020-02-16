#include "pch.h"
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
	int testcases;
	cin >> testcases;
	while (testcases--) {
		string given;
		cin >> given;
		if (next_permutation(given.begin(), given.end()) == false) {
			cout << "no answer" << endl;
		}
		else {
			cout << given << endl;
		}
	}
}