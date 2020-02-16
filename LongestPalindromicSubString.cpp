#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    string given;cin>>given;
    int dp[given.size()][given.size()];
    memset(dp, 0, sizeof(dp));
    int maxLength = 0;
    int start;
    bool flag = true;
    for(lli i = 0;i<given.size();i++){
        dp[i][i] = 1;
        maxLength = 1;
        if(flag){
            start = i;
            flag = false;
        }
    }
    flag = true;
    for(lli i = 0;i<given.size()-1;i++){
        if(given[i] == given[i+1]){
            dp[i][i+1] = 1;
            maxLength = 2;
            if (flag)
            {
                start = i;
                flag = false;
            }
        }
    }
    for(lli i =  3;i<given.size();i++){
        flag = true;
        for(int j = 0;j<given.size();j++){
            int k = j+i-1;
            if(given[j] == given[k] && dp[j+1][k-1]){
                dp[j][k] = 1;
                maxLength = i;
                if (flag)
                {
                    start = j;
                    flag = false;
                }
            }
        }
    }
    cout<<maxLength<<endl;
    cout<<start<<endl;
    cout<<given.substr(start, maxLength);
    return 0;
}
