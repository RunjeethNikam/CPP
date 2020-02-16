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
        map<string, lli> mp;
        lli n;
        cin>>n;
        for(lli i = 0;i<n;i++){
            string given;
            cin>>given;
            mp[given]++;
        }
        if(mp["ab"] or mp["ba"]){
            if(mp["a"])
            mp.erase("a");
            if(mp["aa"])
            mp.erase("aa");
            if(mp["b"])
            mp.erase("b");
            if(mp["bb"])
            mp.erase("bb");

            lli result = 0;
            if(mp["ab"] and mp["ba"]){
                if(mp["ab"] == mp["ba"]){
                    result = 3*min(mp["ab"], mp["ba"]) - min(mp["ab"], mp["ba"]) +1;
                }        
                else{
                    result = 3*min(mp["ab"], mp["ba"]) - min(mp["ab"], mp["ba"]) +1;
                    result += (max(mp["ab"], mp["ba"]) - min(mp["ab"], mp["ba"]))*2 - 1;
                }
            }
            else{
                result += mp["ab"]*2 + mp["ba"]*2;
            }
            cout<<result<<endl;            
        }
        else{
            if((mp["a"] and mp["b"]) or (mp["a"] and mp["bb"]) or (mp["aa"] and mp["b"]) or (mp["aa"] and mp["bb"]))
            cout<<2<<endl;
            else
            cout<<1<<endl;
            // continue;
        }
    }
    return 0;
}
