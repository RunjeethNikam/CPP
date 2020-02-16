#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string given;
    cin>>given;
    vector<int> dp(given.size());
    int count = 0;
    for(int i = given.size()-1;i>=0;i--){
        int x = given[i] - '0';
        if(x%2 == 0){
            count++;
        }
        dp[i] = count;
    }
    for(auto i : dp){
        cout<<i<<" ";
    }
    return 0;
}
