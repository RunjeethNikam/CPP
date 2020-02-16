#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> given(n);
        for(int i = 0;i<n;i++){
            cin>>given[i];
        }
        int mx = 1;
        vector<int> dp(n);
        dp[0] = 1;
        for(int i = 1;i<n;i++){
            int mx1 = 1;
            for(int j = i-1;j>= 0;j--){
                if(given[i] > given[j]){
                    mx1 = max(mx1, dp[j] + 1);
                }
            }
            dp[i] = mx1;
            mx = max(mx, mx1);
        }
        cout<<mx<<endl;
    }
    return 0;
}
