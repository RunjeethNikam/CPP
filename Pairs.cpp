#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n, diff;
    cin>>n>>diff;
    vector<lli> given(n);
    map<lli, lli> mp;
    for(lli i = 0;i<n;i++){
        cin>>given[i];
        mp[given[i]]++;
    }
    lli result = 0;
    for(auto it : given){
        mp[it]--;
        lli require = it-diff;
        result += mp[require];
        mp[it]++;
    }
    cout<<result;
    return 0;
}
