#include "pch.h"
#include <iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<utility>
using namespace std;
int main()
{
	long long int testCases;
	cin >> testCases;
	while (testCases--)
	{
		long long int N, M, K;
		cin >> N >> M >> K;
		map<pair<long long int ,long long int>, long long int> grid;
		long long int sum = 0;
		for (long long int i = 0; i < K; i++) {
			long long int r, c;
			cin >> r >> c;
			if (i == 0) {
				grid[make_pair(r,c)] = 1;
				sum += 4;
			}
			else {
				// 4 sides
				if (grid.find({ r, c - 1 }) != grid.end() && grid.find({ r, c + 1 }) != grid.end() && grid.find({ r + 1, c }) != grid.end() && grid.find({ r - 1, c }) != grid.end()) {
					grid[make_pair(r,c)] = 1;
					sum -= 4;
				}
				// 3 sides
				else if (grid.find({ r, c-1 }) != grid.end() && grid.find({ r+1, c }) != grid.end() && grid.find({ r, c+1 }) != grid.end() || grid.find({ r+1, c }) != grid.end() && grid.find({ r, c + 1 }) != grid.end() && grid.find({ r - 1, c }) != grid.end() || grid.find({ r, c + 1 }) != grid.end() && grid.find({ r-1, c }) != grid.end() && grid.find({ r , c-1 }) != grid.end() || grid.find({ r-1, c  }) != grid.end() && grid.find({ r, c - 1 }) != grid.end() && grid.find({ r + 1, c }) != grid.end()) {
					sum -= 2;
					grid[make_pair(r,c)] = 1;
				}
				// 2 sides
				else if (grid.find({ r, c -1 }) != grid.end() && grid.find({ r+1, c }) != grid.end()|| grid.find({ r+1, c }) != grid.end() && grid.find({ r, c+1 }) != grid.end()|| grid.find({ r, c+1 }) != grid.end() && grid.find({ r-1, c }) != grid.end()|| grid.find({ r-1, c }) != grid.end() && grid.find({ r, c-1 }) != grid.end() || grid.find({ r + 1, c }) != grid.end() && grid.find({ r-1, c }) != grid.end() || grid.find({ r , c+1 }) != grid.end() && grid.find({ r, c - 1 }) != grid.end()) {
					sum = sum;
					grid[make_pair(r,c)] = 1;
				}
				// 1 side
				else if (grid.find({r-1, c}) != grid.end()|| grid.find({ r + 1, c }) != grid.end()|| grid.find({ r , c-1 }) != grid.end()|| grid.find({ r , c+1 }) != grid.end()) {
					sum += 2;
					grid[make_pair(r,c)] = 1;
				}
				else {
					grid[make_pair(r,c)] = 1;
					sum += 4;
				}
			}
		}
		cout << sum << endl;;
	}
}