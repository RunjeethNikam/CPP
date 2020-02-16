#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[])
{
	lli testcases;
	cin>>testcases;
	while(testcases--){
		lli N, K;
		cin>>N>>K;
		std::vector<string> v(N);
		for(auto i = 0;i<N;i++){
			cin>>v[i];
		}
		
		std::map<string, lli> mp;
		for(auto i = 0 ;i<K;i++){
			int x;
			cin>>x;
			string given;
			while(x--){
				cin>>given;
				mp[given]++;
			}
		}
		for(auto i = 0;i<N;i++){
			if(mp.find(v[i]) != mp.end()){
				cout<<"YES ";
			}
			else{
				cout<<"NO ";
			}
		}
		cout<<endl;
	}
	return 0;
}