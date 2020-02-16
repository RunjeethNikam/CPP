#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    lli t;
    cin>>t;
    while(t--){
        lli n, m, q;
        cin>>n>>m>>q;
        vector<lli> rows(n, 0), columns(m, 0);
        while(q--){
            lli r, c;
            cin>>r>>c;
            c--;
            r--;
            rows[r]++;
            columns[c]++;
        }
        lli even = 0;
        lli odd = 0;
        for(auto i : columns){
            if(i&1){
                odd++;
            }
            else{
                even++;
            }
        }
        lli res = 0;
        for(auto i : rows){
            if(i&1){
                res += even;
            }
            else{
                res += odd;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
