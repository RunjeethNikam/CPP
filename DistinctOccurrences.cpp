#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int dp[110][110];
int lps(string S, string T, int i, int j){
    if(j<0){
        // dp[i][j] = 1;
        return 1;
    }
    else if(i<0){
        // dp[i][j] = 0;
        return 0;
    }
    else if(dp[i][j] == -1){
        if(S[i] != T[j]){
            dp[i][j] = lps(S, T, i-1, j);
        }
        else{
            dp[i][j] = lps(S, T, i-1, j-1) + lps(S, T, i-1, j);
        }
    }
    return dp[i][j];
}
int subsequenceCount(string S, string T)
{
  //Your code here
  memset(dp, -1, sizeof(dp));
  return lps(S, T, S.size()-1, T.size()-1);
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        string s, t;
        cin>>s>>t;
        cout<<subsequenceCount(s, t)<<endl;

    }
    return 0;
}
