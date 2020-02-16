#include "pch.h"
#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string A = "/../../../../../a";s
	//cout << A.size() << endl;
	stack<string> sta;
	for (int i = 0; i < A.size(); i++) {
		//cout << i << endl;
		//cout << A[i] << endl;
		if (A[i] == '/') {
			continue;
		}
		else {
			if (A[i] != '.') {
				string name;
				while (i < (A.size()) && A[i] != '/') {
					name.push_back(A[i]);
					i++;
				}

				i--;
				sta.push(name);
				name.clear();
				continue;
			}
			else {

				if (i < A.size() - 1 && A[i + 1] == '.') {
					if (!(sta.empty()))
						sta.pop();
					continue;
				}
				else
				{
					continue;
				}
			}
		}

	}
	string f = "/";
	stack<string> rev;
	//cout << sta[0] << end;
	while (!(sta.empty())) {
		rev.push(sta.top());
		sta.pop();
	}

	while (!rev.empty()) {
		f = f+rev.top();
		f.push_back('/');
		rev.pop();
	}
	f.pop_back();
	if (f.size() == 0) {
		f = '/';
	}
	return f;
}
