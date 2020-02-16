#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	int testCases;
	cin>>testCases;
	while(testCases--){
		int games;
		cin>>games;
		while(games--){
			lli I, N, Q;
			cin>>I>>N>>Q;
			if(I == 1){// all heads
				int head = (N & 1) ? (N - 1)/2 : (N/2);
				if(Q & 1){ // guess head
					cout<<head<<endl;
				}
				else{ // guess tail
					cout<<(N - head)<<endl;
				}
			}
			else{// all tails
				int tail = (N & 1) ? (N - 1)/2 : (N/2);
				if(Q & 1){// guess head
					cout<<(N - tail)<<endl;
				}
				else{// guess tail
					cout<<tail<<endl;
				}
			}
		}
	}
	return 0;
}