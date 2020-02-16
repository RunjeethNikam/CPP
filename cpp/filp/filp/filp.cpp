#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;
void show(int i) {
	cout << i << " ";
}

pair<int, int> kadane(vector<int> v1) {
	for_each(v1.begin(), v1.end(), show);
	int start = -1, end = -1, s = 0;
	int max_so_far = v1[0];
	int max_end_here = 0;
	if (max_end_here < max_so_far) {
		start = 0;
		end = 0;
	}
	for (auto i = 0; i < v1.size(); i++) {
		max_end_here = max_end_here + v1[i];
		if (max_so_far < max_end_here) {
			max_so_far = max_end_here;
			start = s;
			end = i;
		}
		if (max_end_here < 0) {
			max_end_here = 0;
			s = i + 1;
		}
	}
	cout << " start " << start << " end "<<end;

	pair<int, int> sa(start, end);
	return sa;
}








vector<int> flip(string A) {
	// for converting string into number array
	int a = stoi(A);
	vector<int> v;
	for (int i = 0; i < A.length(); i++) {
		int last = a % 10;
		a = a / 10;
		v.push_back(last);
	}



	vector<int> reverse1 = v;
	for (int i = 0; i < reverse1.size(); i++) {
		(reverse1[i] == 0) ? reverse1[i] = 1 : reverse1[i] = 0;
	}
	for (int i = 0; i < reverse1.size(); i++) {
		(reverse1[i] == 0) ? reverse1[i] = -1 : reverse1[i] = 1;
	}
	reverse(reverse1.begin(), reverse1.end());
	//for_each(reverse1.begin(), reverse1.end(), show);
	
	


	pair<int,int> hi = kadane(reverse1);
	for (int i = hi.first; i <= hi.second; i++) {
		(v[i] == 0) ? v[i] = 1 : v[i] = 1;
	}
	cout << "hi " << hi.first << " " << hi.second << endl;
	return v;
}



int main()
{
	vector<int> v;
	v = flip("010");
	//cout << endl;
	//for_each(v.begin(), v.end(), show);
}
