// #include<bits/stdc++.h>
// typedef long long ll;

// using namespace std;
#define mod 1000000007
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	assert(t<=10);
// 	while(t--)
// 	{
// 		ll m,n;
// 		cin>>m>>n;
// 		ll a[m],b[m],asum=0,bsum=0;
// 		for(ll i=0;i<m;i++)
// 		{
// 			cin>>a[i];
// 			asum=(asum%mod+a[i]%mod)%mod;
// 		}

// 		for(ll i=0;i<m;i++)
// 		{
// 			cin>>b[i];
// 			bsum=(bsum%mod+b[i]%mod)%mod;
// 		}
// 		asum=((asum%mod)*(m%mod))%mod;
// 		bsum=((bsum%mod)*(m%mod))%mod;
// 		ll fib[n+1];
// 		memset(fib,0,sizeof(fib));
// 		fib[1]=asum;
// 		fib[2]=bsum;
// 		for(ll i=3;i<=n;i++)
// 		{
// 			fib[i]=(fib[i-1]%mod+fib[i-2]%mod)%mod;
// 		}
// 		cout<<fib[n]<<endl;
// 	}
	

// }


#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t; 
    cin>>t;
    while(t--){
        lli size, K;
        cin>>size>>K;
        lli suma = 0;
        for(lli i = 0;i<size;i++){
            lli x;
            cin>>x;
            suma = (suma%mod + x%mod)%mod;
        }
        lli sumb = 0;
        for(lli i = 0;i<size;i++){
            lli x;
            cin>>x;
            sumb = (sumb%mod + x%mod)%mod;
        }
        lli dp[K][2];
        dp[0][0]=  1;
        dp[1][0] = 0;
        dp[0][1] = 1;
        dp[1][1] = 0;
        for(lli i = 2;i<K;i++){
            dp[i][0] = dp[i-1][0] + dp[i-2][0];
            dp[i][1] = dp[i-1][1] + dp[i-2][1];
        }
        cout<<((size%mod * dp[K-1][0]%mod * suma%mod)%mod          +      (size%mod * dp[K-1][1]%mod * sumb%mod)%mod)%mod<<endl;
    }
    return 0;
}
