#include <bits/stdc++.h>
using namespace std;
#define lli long long int

// int solve(string str1, string str2, int s1, int s2, vector<vector<int>> &dp)
// {
//     if(dp[s1][s2]){
//         return dp[s1][s2];
//     }
//     else if (s1 == 0)
//     {
//         dp[s1][s2] = s2;  
//         return s2;
//     }
//     if (s2 == 0)
//     {
//         dp[s1][s2] = s1;
//         return s1;
//     }
//     if (str1[s1] == str2[s2])
//     {
//         dp[s1][s2] = solve(str1, str2, s1 - 1, s2 - 1, dp);
//         return dp[s1][s2];
//     }
//     dp[s1][s2] = 1 + min({solve(str1, str2, s1, s2 - 1, dp),
//                           solve(str1, str2, s1 - 1, s2, dp),
//                           solve(str1, str2, s1 - 1, s2 - 1, dp)});
//     return dp[s1][s2];
// }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    lli t;
    cin >> t;
    while (t--)
    {
        int s1, s2;
        cin >> s1 >> s2;
        string str1, str2;
        cin >> str1 >> str2;
        vector<vector<int>> dp(s1+1, vector<int> (s2+1, 0));
        vector<vector<int>> dp1(s1 + 1, vector<int>(s2 + 1, 0));
        // cout << solve(str1, str2, s1 - 1, s2 - 1, dp) << endl;
        int insert = 0, del = 0,replace = 0; 
        for(int i = 0;i<=s1;i++){
            for(int j = 0;j<=s2;j++){
                if(i == 0){
                    dp[i][j] = j;
                    // insert += j;
                    dp1[i][j] = j;
                }
                else if(j == 0){
                    dp[i][j] = i;
                    // insert += i;
                    dp1[i][j] = i;
                }
                else if(str1[i-1] == str2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                    dp1[i][j] = dp1[i - 1][j - 1];
                }
                else{
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i-1][j-1], dp[i][j-1]});
                    dp1[i][j] = 1 + min({dp1[i - 1][j], dp1[i - 1][j - 1], dp1[i][j - 1]});
                    if (min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]}) == dp[i - 1][j]){
                        dp1[i][j] = dp1[i - 1][j];
                    }
                }
            }
        }
        cout<<dp[s1][s2]<<endl;
        del = str1.length()- str2.length();
        // cout<<dp[s1][s2] - del<<" edit "<<del<<" delete "<<endl;
        // if (dp[s1][s2] - del){
            cout << dp[s1][s2] - del << " edit ";
        // }
        // if(del){
            cout << del << " delete " ;
        // }
        cout<<endl;
    }

    return 0;
}
