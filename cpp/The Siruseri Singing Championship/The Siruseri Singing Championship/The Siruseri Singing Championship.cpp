#include "pch.h"
	#include <iostream>
	#include<vector>
	#include<utility>
	#include<algorithm>
	#include<tuple>
	using namespace std;

	bool myfuction(tuple<int, int, int> i, tuple<int, int, int> j) {
		if (get<0>(i) != get<0>(j))
			return (get<0>(i) < get<0>(j));
		else
			return (get<1>(i) < get<1>(j));
	}

	int main()
	{
		vector<tuple<int, int, int>> hi;
		int size;
		cin >> size;
		for (int i = 0; i < size; i++) {
			tuple<int, int, int> h;
			cin >> get<0>(h) >> get<1>(h);
			get<2>(h) = i;
			hi.push_back(h);

		}
		//cout << "hi" << endl;
		vector<int> counter(hi.size(), 0);
		for (int i = 0; i < hi.size(); i++) {
			for (int j = i + 1; j < hi.size(); j++) {
				if ((get<0>(hi[i]) < get<0>(hi[j])) && (get<1>(hi[i]) > get<1>(hi[j]))) {
					counter[get<2>(hi[i])] += 2;
				}

				else if ((get<0>(hi[i]) > get<0>(hi[j])) && (get<1>(hi[i]) < get<1>(hi[j]))) {
					counter[get<2>(hi[j])] += 2;
				}

			}
		}
		for (int i : counter) {
			cout << i;
		}
	}