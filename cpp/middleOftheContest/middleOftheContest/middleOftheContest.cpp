#include "pch.h"
#include<string>
#include <iostream>
using namespace std;
int main()
{
	int h1, h2, m1, m2;
	char hi;
	cin >> h1>>hi >> m1;
	cin >> h2 >> hi >> m2;
	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;
	//cout << t1 << " " << t2 << endl;
	t1 = (t1 + t2) / 2;
	h1 = t1 / 60;
	m1 = t1 % 60;
	//cout << h1 << " " << m1 << endl;
	if (0 <=  hi && h1 <= 9 && 0<=m1 && m1<=9) {
		//cout << "hi" << endl;
		cout << "0" << h1 << ":" << "0" << m1;
	}
	else if (0 <= h1 && h1 <= 9) {
		cout << "0" << h1 << ":" << m1;
	}
	else if (0 <= m1 && m1 <= 9) {
		cout << h1 << ":" << "0" << m1;
	}
	else {
		cout << h1 << ":" << m1;
	}
	
}
