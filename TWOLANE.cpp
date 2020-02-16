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
    lli t;
    cin>>t;
    while(t--){
        lli n, k, d;
        cin>>n>>k>>d;
        vector<pair<lli,lli>> obj(n);
        for(auto &i:obj){
            cin>>i.first;
        }
        for(auto &i : obj){
            cin>>i.second;
        }
        lli i = 1;
        lli lastEncounterd = obj[0].first;
        lli currentLane = (obj[0].second == 1)?2 : 1;
        while(i<n && obj[0].second == obj[i].second){
            i++;
            lastEncounterd = obj[i].first;
            currentLane = obj[i].second;
        }
        for(i;i<n;i++){
            
        }


    }
    return 0;
}
