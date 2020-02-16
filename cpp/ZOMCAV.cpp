#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli size;
        cin>>size;
        vector<lli> Ci(size);
        vector<lli> Hi(size);
        for(auto i = 0;i<size;i++){
            cin>>Ci[i];
        }
        for(auto i = 0;i<size;i++){
            cin>>Hi[i];
        }
        vector<lli> dp(size+1);
        for(auto i =0;i<size;i++){
            lli lo = ((i-Ci[i]) < 0)? 0: (i-Ci[i]);
            lli hi = ((i+Ci[i]) > (size-1))? size-1:(i+Ci[i]);
            dp[lo] += 1;
            dp[hi+1] -= 1;
        }
        for(auto i = 1;i<size;i++){
            dp[i] = dp[i-1] + dp[i];
        }
        dp.pop_back();
        // for(auto i = 0;i<dp.size();i++)
        //     cout<<dp[i]<<" ";
            // cout<<endl;
        sort(Hi.begin(), Hi.end());
        sort(dp.begin(), dp.end());
        // for(auto i = 0;i<Hi.size();i++)
        //     cout<<Hi[i]<<" ";
        if(Hi == dp)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
        
    }    
    return 0;
}
