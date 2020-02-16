#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        vector<int> given(size, 0);
        for(auto &i : given){
            cin>>i;
        }
        vector<int> dp(size, 1);
        for(int i = 1;i<size;i++){
            for(int j = 0;j<i;j++){
                if(given[i] > given[j]){
                    dp[i] = max(dp[j]+1, dp[i]);
                }
            }
        }
        int result = -1;
        for(auto i : dp){
            result = max(result, i);
        }
        cout<<result<<endl;
    }
    return 0;
}
