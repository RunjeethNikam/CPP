// balancing paranthes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	 string A = "{})[]";
	 stack<char> chr;
	 for (int i = 0; i < A.size(); i++) {
		 if (A[i] =='(' || A[i] == '[' || A[i] == '{') {
			 chr.push(A[i]);
		 }
		 else {
			 if (chr.size() == 0) {
				 return 0;
			 }
			 else{
				 char last = chr.top();
				 chr.pop();
				char present = A[i];
				if (present == ')') {
					if (last == '(')
						continue;
					else
						return 0;
				}
				else if (present == ']') {
					if (last == '[')
						continue;
					else
						return 0;
				}
				else if (present == '}') {
					if (last == '{')
						continue;
					else
						return 0;
				}
			 }
		 }
	 }
	 if (chr.size() != 0) {
		 return 0;
	 }
	 return 1;
}
