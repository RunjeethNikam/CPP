#include "pch.h"
#include <iostream>
#include<stack>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

int main()
{
	vector<int> A = { 8, 23, 22, 16, 22, 7, 7, 27, 35, 27, 32, 20, 5, 1, 35, 28, 20, 6, 16, 26, 48, 34 };
	vector<int> B(A.size());
	stack<int> st;
	for (int i = 0; i < A.size(); i++) {
		if (st.size() == 0) {
			st.push(i);
		}
		else {
			if (A[st.top()] < A[i]) {
				st.push(i);
			}
			else {
				while (!st.empty() && A[st.top()] >= A[i]) {
					if (A[st.top()] == A[i]) {
						if (st.size() > 1) {

							int top = st.top();
							st.pop();
							B[i] = A[st.top()];
							cout << A[i] << " " << A[st.top()] << endl;
							st.push(i);
							break;
						}
						else {
							cout << A[i] << " " << " -1 " << endl;
							B[i] = -1;
							break;
						}
					}
					int top = st.top();
					st.pop();
					if (st.size() == 0) {
						cout << A[top] << " " << " -1 " << endl;
						B[top] = -1;
						
					}
					else {
						cout << A[top] << " " << A[st.top()] << endl;
						B[top] = A[st.top()];
					}
				}
				st.push(i);

			}
		}
	}
	while (st.size() != 1) {
		int top = st.top();
		st.pop();
		cout << A[top] << " " << A[st.top()] << endl;
		B[top] = A[st.top()];
	}
	cout << A[st.top()] << " " << "-1" << endl;
	B[st.top()] = -1;
	for (int i = 0; i < B.size(); i++)
		cout << B[i] << endl;
}
