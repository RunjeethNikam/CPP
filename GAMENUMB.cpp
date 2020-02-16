#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool cmp(pair<lli, lli> a, pair<lli, lli> b){
    return a.first<b.first;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n,  k;
        cin>>n>>k;
        vector<pair<lli, lli>> cards(n);
        for(auto &i : cards){
            cin>>i.first;
        }
        for(auto &i : cards){
            cin>>i.second;
        }
        sort(cards.begin(), cards.end());
        vector<pair<lli, lli>> dp(n);
        dp[0].first = 1;
        dp[0].second = (cards[0]).second;
        for(lli i =1;i<n;i++){
            dp[i].first = dp[i-1].second + 1;
            dp[i].second = dp[i-1].second + cards[i].second;
        }
        lli i = 1,j = dp.back().second;
        for(lli x = 1;x<= k;x++){
            lli round;
            cin>>round;
            if(x&1){
                i = j-round +1;
            }
            else{
                j = i+round-1;
            }
        }
        lli sum = 0;
        for(auto x = 0;x<dp.size();x++){
            if(i <= dp[x].second and i >= dp[x].first and j > dp[x].second){
                sum += (dp[x].second - i + 1)*cards[x].first;
            }
            else if(i < dp[x].first and j > dp[x].second){
                sum += (dp[x].second - dp[x].first + 1)*cards[x].first;
            }
            else if(i < dp[x].first and j <= dp[x].second and j >= dp[x].first){
                sum += (j - dp[x].first + 1)*cards[x].first;
            }
            else if(i >= dp[x].first and j <=dp[x].second){
                sum += (j-i + 1)*cards[x].first;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
