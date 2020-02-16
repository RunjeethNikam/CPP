#include<bits/stdc++.h>
using namespace std;
int t, n;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<int> given(n);
        int mn = INT_MAX;
        for(int i = 0;i<n;i++){
            cin>>given[i];
            mn = min(given[i], mn);
        }
        int res = 1e9;
        for(int t = mn-4;t<= mn;t++){
            int s = 0;
            for(int i = 0;i<n;i++){
                // if(mn != given[i]){
                    int D = given[i]-t;
                    s += D/5, D = D%5;
                    s += D/2, D = D%2;
                    s += D;
                // }
            }
            res = min(res, s);
        }
        cout<<res<<endl;
    }
    
    return 0;
}
