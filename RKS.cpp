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
        lli n, k;
        cin>>n>>k;
        vector<bool> cols(n, false), rows(n, false);
        for(lli i = 1;i<=k;i++){
            lli r, c;
            cin>>r>>c;
            r--, c--;
            rows[r] = true;
            cols[c] = true;
        }
        if(k == n){
            cout<<0;
        }
        else{
            queue<lli> c;
            for(lli i = 0;i<cols.size();i++){
                if(!cols[i]){
                    c.push(i);
                }
            }
            cout<<(n-k);
            for(lli i = 0;i<rows.size();i++){
                if(!rows[i]){
                    cout<<" "<<(i+1)<<" "<<(c.front()+1);
                    c.pop();
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
