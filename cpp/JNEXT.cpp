#include <bits/stdc++.h>
using namespace std;
// ##ifndef lli
#define lli long long int
// #endif
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli size;
		cin>>size;
		std::vector<int> v(size);
		for(auto i = 0;i<size;i++){
			cin>>v[i];
		}
		bool flag = next_permutation(v.begin(), v.end());
		if (flag)
		for(auto i = v.begin(); i != v.end();i++){
			cout<<*i;
		}
		else
			cout<<"-1";
		cout<<endl;
	}
	// cout<<endl;
	return 0;
}