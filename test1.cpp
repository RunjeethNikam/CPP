#include<bits/stdc++.h>
using namespace std;
#define lli long long int
// bool cmp(pair<lli, lli> a, pair<lli, lli> b){
//     return a.second<=b.second;
// }
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    vector<pair<lli, lli>> clas(n);
    for(auto &i : clas){
        cin>>i.second>>i.first;
    }
    if(clas.size() ==1){
        cout<<1;
        return 0;
    }
    sort(clas.begin(), clas.end());
    lli result = 1;
    lli end = clas[0].first;
    for(auto i = 1;i<clas.size();i++){
        if(clas[i].second >= end){
            end = clas[i].first;
            result++;
        }
    }
    cout<<result;
    return 0;
}
