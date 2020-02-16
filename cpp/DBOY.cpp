// // #include<bits/stdc++.h>
// #include<vector>
// #include<iostream>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int size;
//         cin>>size;
//         vector<int> given(size);
//         int maxdist = -1;
//         for(auto i = 0;i<size;i++){
//             cin>>given[i];
//             if(maxdist < given[i])
//                 maxdist = given[i];
//         }
//         maxdist = 2*maxdist;
//         vector<int> coins(size);
//         for(auto i = 0;i<size;i++){
//             cin>>coins[i];
//         }
//         vector<int> dp(maxdist+1, pow(10, 5));
//         dp[0] = 0;
//         for(int i = 0;i<coins.size();i++){
//             int coin = coins[i];
//             for(int j = coin;j<dp.size();j++){
//                 dp[j] =min({dp[j], dp[j-1]+1, (j%coin == 0) ? int(j/coin):int(pow(10,6))});
//             }
//             for(int i = 0;i<dp.size();i++){
//             cout<<dp[i]<<" ";
//             }
//             cout<<endl;
//         }
        
//         int sum = 0;
//         for(int i = 0;i<dp.size();i++){
//             sum += dp[2*given[i]];
//         }
        
//         cout<<sum<<endl;;

//     }
    
//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int h[n],k[n],m=0;
        for(int i=0;i<n;i++)
            {
                cin>>h[i];
                h[i]=2*h[i];
                if(h[i]>m)
                    m=h[i];
            }
        for(int i=0;i<n;i++)
            cin>>k[i];
        int dp[m+1];
        sort(k,k+n);
        dp[0]=0;
        for(int i=1;i<=m;i++)
            dp[i]=1000;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(j-k[i]>=0)
                {
                    dp[j] = min(dp[j-k[i]]+1, dp[j]);
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
            sum+= dp[h[i]];
        cout<<sum<<endl;

    }
}
