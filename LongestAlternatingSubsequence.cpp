#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    lli t;
    cin >> t;
    while (t--)
    {
        lli size;
        cin >> size;
        vector<int> given(size);
        for (lli i = 0; i < size; i++)
        {
            cin >> given[i];
        }
        // lli dp[size][2];
        vector<vector<lli>> dp(size, vector<lli> (2, 1));
        lli result = -1;
        for(lli i = 0;i<size;i++){
            for(lli j = 0;j<i;j++){
                if(given[j] < given[i]){
                    dp[i][1] = max(dp[i][1], dp[j][0]+1);
                }
                else if(given[j] > given[i]){
                    dp[i][0] = max(dp[i][0], dp[j][1]+1);
                }
            }
            result = max(dp[i][0], dp[i][1]);
        }
        cout<<result<<endl;
    }
    return 0;
}
