// Campus Drive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;
#define lli long

//my method which gives TLE


//int main()
//{
//	lli N, K;
//	cin >> N >> K;
//	vector<pair<lli, lli>> programmers;
//	for (lli i = 0; i < N; i++) {
//		lli k;
//		cin >> k;
//		programmers.push_back(make_pair(i, k));
//	}
//	lli queries;
//	cin >> queries;
//	lli code, X, Y;
//	while (queries--) {
//		cin >> code >> X >> Y;
//		lli count = 0;
//		if (code == 1) {
//			programmers[X].first = X;
//			programmers[X].second = Y;
//		}
//		else if(code == 2) {
//			for (lli i = X; i <= Y && i < programmers.size(); i++) {
//				if (programmers[i].second > K) {
//					count++;
//				}
//			}
//		cout << count << endl;
//		}
//	}
//}



// sqrt(n) method


//#include<iostream>
//#include<cmath>
//using namespace std;
//
//void update(long x, long y, long a[], long b[], long bs, long k) {
//	long blockNumber = x / bs;
//	if (y > k) {
//		if (a[x] <= k)
//			b[blockNumber] ++;
//	}
//	else {
//		if ((a[x] > k) && (b[blockNumber] > 0))
//			b[blockNumber]--;
//	}
//	a[x] = y;
//}
//
//long query(long l, long r, long a[], long b[], long bs, long k) {
//	long sum = 0;
//	while (l < r and l % bs != 0 and l != 0) {
//		// traversing first block in range
//		if (a[l] > k)
//			sum++;
//		l++;
//	}
//	while (l + bs <= r) {
//		// traversing completely overlapped blocks in range
//		sum += b[l / bs];
//		l += bs;
//	}
//	while (l <= r) {
//		// traversing last block in range
//		if (a[l] > k)
//			sum++;
//		l++;
//	}
//	return sum;
//}
//
//int main(void) {
//	long n, k, q;
//	cin >> n >> k;
//	long *a = new long[n];
//	for (lli i = 0; i < n; i++)
//		a[i] = 0;
//	for (long i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	long bs = sqrt(n);
//	//cout<<bs;
//	long m = ceil(float(n) / bs);
//	long* b = new long[m];
//	for (lli i = 0; i < m; i++)
//		b[i] = 0;
//	long c = 0, j = -1;
//	for (long i = 0; i < n; i++) {
//		if (i % bs == 0)
//			j++;
//		//cout<<endl;
//	//cout<<a[i]<<" ";
//		if (a[i] > k)
//			b[j] ++;
//	}
//	/*for(int i = 0; i<m; i++){
//		cout<<b[i]<<" ";
//	}*/
//	cin >> q;
//	for (long i = 0; i < q; i++) {
//		long x, y, z;
//		cin >> x >> y >> z;
//		if (x == 1) {
//			update(y, z, a, b, bs, k);
//		}
//		else {
//			cout << query(y, z, a, b, bs, k) << endl;
//		}
//	}
//}




// my sqrt(n) method

int main() {
	lli N, K;
	cin >> N >> K;
	vector<lli> programmers(N);
	for (lli i = 0; i < N; i++) {
		cin >> programmers[i];
	}
	lli j = -1;
	lli size_block = int(sqrt(N));
	lli size_sqrt_pro =ceil((float) N / size_block);
	vector<lli> sqrt_pro(size_sqrt_pro);
	for (lli i = 0; i < N; i++) {
		if ((i % size_block) == 0) {
			j++;
		}
		if (programmers[i] > K) {
			sqrt_pro[j]++;
		}
	}
	lli Queries;
	cin >> Queries;
	lli code, X, Y;
	while (Queries--) {
		cin >> code >> X >> Y;
		if (code == 1) {
			// update
			lli pointer = X / size_block;
			if (Y > K) {
				if (programmers[X] <= K) {
					sqrt_pro[pointer]++;
				}
			}
			else {
				if (programmers[X] > K and sqrt_pro[pointer] > 0)
					sqrt_pro[pointer]--;
			}
			programmers[X] = Y;
		}
		else {
			//quere
			lli sum = 0;
			while (X < Y and X != 0 and X % size_block != 0) {
				if (programmers[X] > K)
					sum++;
				X++;
			}
			while (X + size_block <= Y) {
				sum += sqrt_pro[X / size_block];
				X += size_block;
			}
			while (X <= Y) {
				if (programmers[X] > K)
					sum++;
				X++;
			}
			cout << sum << endl;
		}
	}
}