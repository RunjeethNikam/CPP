#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(vector<lli> &given){
    if(given.size() == 0){
        return 0;
    }
    lli incl = given[0], excl = 0;
    for(lli i = 1;i<given.size();i++){
        lli incl_new = given[i] + min(incl, excl);
        lli excl_new = incl;
        incl = incl_new;
        excl = excl_new;
    }
    return min(incl, excl);
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
        vector<lli> given(n);
        for(lli i = 0;i<n;i++){
            cin>>given[i];
        }
        cout<<solve(given)<<endl;
    }
    return 0;
}
