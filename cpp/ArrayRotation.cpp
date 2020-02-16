#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
ll testcases;
cin>>testcases;
while(testcases--){
	ll size;
	cin>>size;
	int given[size];
	for(auto i = 0;i<size;i++)
		cin>>given[i];
	int rotation;
	cin>>rotation;
	for(auto i = 0;i<rotation;i++){
		ll temp = given[0];
		for(auto j = 1;j <size;j++){
			given[j-1] = given[j];
		}
		given[size-1] = temp;
	}
	for(auto element:given)
		cout<<element<<" ";
	cout<<endl;
	}

	return 0;
}