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
    while (t--)
    {
        string given;
        cin>>given;
        lli k;
        cin>>k;
        unordered_map<char, lli> mp;
        lli i = 0, j = 0;
        lli res;
        // mp[given[0]]++;
        while(mp.size() != k and j<given.size()){
            mp[given[j]]++;
            j++;
        }
        if(mp.size() != k){
            cout<<-1<<endl;
            continue;
        }
        res = j;
        for(;j<given.size();j++){
            mp[given[j]]++;
            if(mp.size() > k){
                while(mp.size() > k){
                    mp[given[i]]--;
                    if(mp[given[i]] == 0){
                        mp.erase(given[i]);
                    }
                    i++;
                }
            }
            res = max(res, j-i+1);
        }
        cout<<res<<endl;

    }
    
    return 0;
}
