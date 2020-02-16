#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int inf = 1e9 + 10; // infinity
const int maxn = 2e5 + 10;
bool dp[maxn], pd[maxn]// pd = suffix array, dp = prefix array



int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>t;
		dp[0] = 1;
		a[0] = -inf;
		for(int i = 1;i<= n;i++){
			cin>>a[i];
			dp = (dp[i-1] & (a[i-1] < a[i]));
		}
		pd[n+1] = 1;
		a[n+1] = inf;
		for(int i = n;i>= 1;i--){
			pd[i] = (pd[i+1] & (a[i] < a[i+1]));
		}
		ll answer = 0;
	}	
	return 0;
}