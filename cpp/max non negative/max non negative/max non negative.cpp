#include "pch.h"
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<long long > given = { 1967513926, 1540383426, -1303455736, -521595368 };
	int cur_max = 0, cur_max_range_left=0, cur_max_range_right=0;
	int mx_sum = 0, mx_sum_range_left=-1, mx_sum_range_right=-1;
	for (cur_max_range_right = 0; cur_max_range_right < given.size(); cur_max_range_right++) {
		if (given[cur_max_range_right] >= 0) {
			cur_max = cur_max + given[cur_max_range_right];
			if (cur_max > mx_sum) {
				mx_sum = cur_max;
				mx_sum_range_left = cur_max_range_left;
				mx_sum_range_right = cur_max_range_right;
			}
			else if(cur_max == mx_sum) {
				if (cur_max_range_right + 1 - cur_max_range_left > mx_sum_range_right + 1 - mx_sum_range_left) {
					mx_sum_range_left = cur_max_range_left;
					mx_sum_range_right = cur_max_range_right;
				}
			}

		}
		else {
			cur_max = 0;
			cur_max_range_left = cur_max_range_right + 1;
		}
		cout << mx_sum_range_left << " x " << mx_sum_range_right;
	}

}