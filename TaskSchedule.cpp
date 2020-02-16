#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool cmp(pair<lli, lli> &a, pair<lli, lli> &b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        vector<pair<lli,lli>> given(n, {0,0});
        for(lli i = 0;i<n;i++){
            cin>>given[i].first>>given[i].second;
        }
        sort(given.begin(), given.end(), cmp);
        lli count = 0;
        lli limit = INT_MIN;
        for(lli i = 0;i<given.size();i++){
            lli start = given[i].first;
            lli end = given[i].second;
            if(start >= limit){
                count++;
                limit = end;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
