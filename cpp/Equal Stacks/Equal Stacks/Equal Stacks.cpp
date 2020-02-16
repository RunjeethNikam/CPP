// Equal Stacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1, v2, v3;
	stack<int> s1, s2, s3;
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	long long  sum1 = 0, sum2 = 0, sum3 = 0;
	//cout << "hi";
	for (int i = 0; i < n1; i++) {
		int element;
		cin >> element;
		v1.push_back(element);
	}
	for (int i = 0; i < n2; i++) {
		int element;
		cin >> element;
		v2.push_back(element);
		//sum2 += element;
	}
	for (int i = 0; i < n3; i++) {
		int element;
		cin >> element;
		v3.push_back(element);
		//sum3 += element;
	}
	
	reverse(v1.begin(), v1.end());
	reverse(v2.begin(), v2.end());
	reverse(v3.begin(), v3.end());
	s1.push(0);
	s2.push(0);
	s3.push(0);
	
	for (int i = 0; i < n1; i++) {
		sum1 += v1[i];
		s1.push(sum1);
	}
	for (int i = 0; i < n2; i++) {
		sum2 += v2[i];
		s2.push(sum2);
	}
	for (int i = 0; i < n3; i++) {
		sum3 += v3[i];
		s3.push(sum3);
	}
	/*while (s1.size()) {
		cout << s1.top() << endl;
		s1.pop();
	}
	while (s2.size()) {
		cout << s2.top() << endl;
		s2.pop();
	}
	while (s3.size()) {
		cout << s3.top() << endl;
		s3.pop();
	}*/
	while (s1.top() != s2.top() || s1.top() != s3.top()) {
		if (s1.top() > s2.top()){
			cout << s1.top() << "s1" << endl;
			s1.pop();
		}
		if (s1.top() > s3.top()) {
			cout << s1.top() << "s1" << endl;
			s1.pop();
		}
		if (s2.top() > s1.top()) {
			cout << s2.top() << "s2" << endl;
			s2.pop();
		}
		if (s2.top() > s3.top()) {
			cout << s2.top() << "s2" << endl;
			s2.pop();
			
		}
		if (s3.top() > s1.top()) {
			cout << s3.top() << "s3" << endl;
			s3.pop();
		}
		if (s3.top() > s2.top()) {
			cout << s3.top() << "s3" << endl;
			s3.pop();
		}
	}
	
	if (s1.size() == 0) {
		cout << 0;
	}
	else {
		cout << s1.top();
	}


}