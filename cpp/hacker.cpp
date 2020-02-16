#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
	vector<long long> v1,v2;
	long long size;
	cin>>size;
	for(int i =0;i<size;i++){
		int x;
		cin>>x;
		v1.push_back(x);
	}
	sort(v1.begin(), v1.end());
	for(int i =0;i<size;i++){
		int x;
		cin>>x;
		v2.push_back(x);
	}
	sort(v2.begin(), v2.end());
	long long sum=0;
	for(int i = 0;i<size;i++){
		if(v1[i]>=0&& v2[i] >= 0)
		sum = (sum%1000000007 + abs(v1[i]%1000000007 - v2[i]%1000000007)%1000000007)%1000000007;
		else if(v1[i] >= 0 && v2[i] <= 0)
		sum = (sum%1000000007 + abs(v1[i]%1000000007 + abs(v2[i])%1000000007)%1000000007)%1000000007;
		else if(v1[i] <= 0 && v2[i] >= 0)
		sum = (sum%1000000007 + abs(abs(v1[i])%1000000007 + v2[i]%1000000007)%1000000007)%1000000007;
		else if(v1[i] <= 0 && v2[i] <= 0)
		sum = (sum%1000000007 + abs(abs(v1[i])%1000000007 - abs(v2[i])%1000000007)%1000000007)%1000000007;
	}
	cout<<sum%1000000007<<endl;
}
