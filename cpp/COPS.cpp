#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[])
{
	lli testcases;
	cin>>testcases;
	while(testcases--){
		lli M, x, y;
		cin>>M>>x>>y;
		std::vector<int> v(M);
		for(int i = 0 ;i<M;i++){
			cin>>v[i];
		}
		std::vector<int> answer(110);
		for(auto i = 0;i<M;i++){
			for(auto j = v[i];j<=(v[i] + x*y)&&j<= 100;j++ ){
				answer[j] = 1;
			}
			for(auto j = v[i];j>=(v[i] - x*y)&&j>=1;j-- ){
				answer[j] = 1;
			}
			
		}
		int print = 0;
			for(auto i = 1;i<=100;i++){
				if(answer[i] != 1)
					print++;
			}
		cout<<print<<endl;
	}
	return 0;
}