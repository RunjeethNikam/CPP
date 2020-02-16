#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli N;
		cin>>N;
		std::vector<int> v(N);
		for(auto i = 0;i<N;i++)
			cin>>v[i];
		lli last = v[0];
		cout<<last<<" ";
		for(auto i = 1;i<N;i++)
		{
			if(v[i] != last){
				cout<<v[i]<<" ";
				last = v[i];
			}
		}
		cout<<endl;
	}
	return 0;
}