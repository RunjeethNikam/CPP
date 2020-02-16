#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FOR(i,x,n) for(i=x;i<n;i++)
#define RFOR(i,x,n) for(i=x;i>=n;i--)
#define pb push_back
 
typedef long long int lli;
lli dp[5001][5001];
const lli mod=1e9+7;
 
using namespace std;
int main() 
{
    fast()
    lli n, i, j, k, nz=0, l, op=0, a[5001];
    string s;
    cin>>n>>s;
    if(s[0]=='0') cout<<0<<endl;
    else
    {
        a[0]=s[0]-48;
        FOR(i,1,n) a[i] = a[i-1]+s[i]-48;
	    FOR(i,0,n){FOR(j,0,n+1) dp[i][j]=0;}
	    FOR(i,0,n){if(s[i]=='0') nz=1; dp[i][1] = 1 - nz;}
	    FOR(i,0,n){FOR(j,0,n+1) cout<<dp[i][j]<<" "; cout<<endl;}

	    FOR(l,2,n+1) 
	    {
		    dp[l-1][l] = ( dp[l-1][l-1] + 1ll) % mod;
		    FOR(i,l,n) 
		    {
			    if(s[i-l+1]=='0'){dp[i][l] = dp[i][l-1];continue;}
			    lli idx = i - l, st = 1, ed = min(i - l + 1ll, l), md, lnA = 0;
			    lli obj = a[i] - a[i-l];
			    while(st<=ed) 
			    {
				    md = st + ( ed - st ) / 2;
				    lli tt = a[idx];
				    if(idx>=md) tt-=a[idx-md];
				    if(tt<=obj) { lnA = md; st = md + 1;} 
				    else { ed = md - 1;}
			    }
			    if(lnA==0){dp[i][l] = dp[i][l-1];continue;}
			    dp[i][l] = (dp[i][l-1] + dp[idx][lnA]) % mod;
		    }
	    }
	    cout<<dp[n-1][n]; 
    }
    return 0;
}