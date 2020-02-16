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
    vector<lli> seq;
    seq.push_back(0);
    seq.push_back(0);
    map<lli, vector<lli>> mp;
    mp[0].push_back(1);
    for(lli i= 2;i<=128;i++){
        if(mp[seq.back()].size()> 1){
            lli last = mp[seq.back()].back() - mp[seq.back()][mp[seq.back()].size()-2];
            seq.push_back(last);
            mp[seq.back()].push_back(i);
        }else{
            seq.push_back(0);
            mp[seq.back()].push_back(i);
        }
    }
    
    cin>>t;
    while(t--){
        map<lli, lli> mpp;
        lli n;
        cin>>n;
        for(lli i = 1;i<= n;i++){
            mpp[seq[i]]++;
        }
        cout<<mpp[seq[n]]<<endl;
    }
    return 0;
}
