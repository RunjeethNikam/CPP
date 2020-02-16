#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    map<lli, lli> mp;
    for(int i = 0;i<n;i++){
        lli x;
        cin>>x;
        mp[x]++;
    }
    lli count = 0;
    for(auto it = mp.begin();it!=mp.end();it++){
        count += it->second / 2;
    }
    cout<<(count);
    return 0;
}
