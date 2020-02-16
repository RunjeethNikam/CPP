#include "pch.h"
#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
	vector<int> A = { 90, 58, 69, 70, 82, 100, 13, 57, 47, 18 };
	int max = -1;
	stack<int> sta;
	for (int i = 0; i < A.size(); i++) {
		if (sta.size() == 0) {
			sta.push(i);
		}
		else {
			if (A[sta.top()] < A[i]) {
				sta.push(i);
			}
			else {
				while(!sta.empty() && A[sta.top()] > A[i]){
					int top_index = sta.top();
					sta.pop();
					if (sta.size() == 0) {
						int distance = (i - 1) - (top_index) + 1;
						cout << A[top_index] << " " << distance * A[top_index] << endl;
						if ((distance * A[top_index]) > max) {
							max = (distance * A[top_index]);
						}
					}
					else{
						int top = sta.top();
						int distance = (i - 1) - (top + 1) + 1;
						cout << A[top_index] << " " << distance * A[top_index]<<endl;
						if ((distance * A[top_index]) > max) {
							max = (distance * A[top_index]);
						}
					}
				}
				sta.push(i);
			}
		}
	}
	//while (sta.size()) {
		//cout << "hi" << endl;
		//cout << sta.top()<<endl;
		//sta.pop();
	//}
	
	while (!sta.empty()) {
		int top_index = sta.top();
		sta.pop();
		if (sta.size() == 0) {
			int distance = A.size();
			cout << A[top_index] << " " << A[top_index] * distance << endl;
			if ((A[top_index] * distance) > max) {
				max = (A[top_index] * distance);
			}
		}
		else{
		int top = sta.top();
		int distance = (A.size() - 1) - (top + 1) + 1;
		cout << A[top_index] <<"  "<< A[top_index] * distance << endl;
		if ((A[top_index] * distance) > max) {
			max = (A[top_index] * distance);
		}
		}
		cout << endl << max << endl;
	}
	
}
