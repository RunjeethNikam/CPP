#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ld long double
bool vowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    return 0;
}
bool check(string given)
{
    bool flag = true;
    lli last = -1;
    for(auto i = 0;i<given.size();i++){
        if(!vowel(given[i]) and flag){
            flag = false;
            last = i;
        }
        else if (!vowel(given[i])){
            if ((i - last) <= 2){
                return false;
            }
            last = i;
        }
    }
    return true;
}
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
        lli L;
        cin >> L;
        vector<string> given(L);
        for (auto &i : given)
        {
            cin >> i;
        }
        // map<lli, vector<string>> mp;
        vector<vector<string>> mp(3, vector<string> (0));
        for (auto i : given)
        {
            if (check(i))
            {
                mp[1].push_back(i);
                // cout<<"Alice"<<endl;
            }
            else
            {
                mp[2].push_back(i);
                // cout<<"Bob"<<endl;
            }
        }
        ld result1 = 0.;
        {
            vector<lli> arr(26, 0);
            vector<lli> arr1(26, 0);
            for(auto i : mp[1]){
                vector<lli> dp(26, 0);
                for(auto j : i){
                    dp[j-'a'] = 1;
                    arr1[j-'a']++;
                }
                for(lli j = 0;j<26;j++){
                    if(dp[j]){
                        arr[j]++;
                    }
                }
            }
            for(lli i = 0;i<26;i++){
                if(arr[i]){
                    result1 += log(arr[i]) - log(arr1[i])*mp[1].size();
                }
            }
        }
        ld result2 = 0.;
        {
            vector<lli> arr(26, 0);
            vector<lli> arr1(26, 0);
            for (auto i : mp[2])
            {
                vector<lli> dp(26, 0);
                for (auto j : i)
                {
                    dp[j - 'a'] = 1;
                    arr1[j - 'a']++;
                }
                for (lli j = 0; j < 26; j++)
                {
                    if (dp[j])
                    {
                        arr[j]++;
                    }
                }
            }
            for (lli i = 0; i < 26; i++)
            {
                if (arr[i])
                {
                    result2 += log(arr[i]) - log(arr1[i]) * mp[2].size();
                }
            }
        }
        result1 = result1 - result2;
        result1 = exp(result1);
        if(result1 > 1e7){
            cout << "Infinity"<<endl;
        }
        else{
            cout<<fixed<<setprecision(8)<<result1<<endl;
        }
    }
    return 0;
}
