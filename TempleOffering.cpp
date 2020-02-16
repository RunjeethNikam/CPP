#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(vector<lli> &given){
    vector<lli> g1(given.size()), g2(given.size());
    g1[0] = 1;
    g2.back() = 1;
    for(lli i= 1;i<given.size();i++){
        if(given[i] > given[i-1]){
            g1[i] = g1[i-1]+1;
        }
        else{
            g1[i] = 1;
        }
    }
    for(lli i= (given.size()-1)-1;i>=0;i--){
        if(given[i] > given[i+1]){
            g2[i] = g2[i+1]+1;
        }
        else{
            g2[i] = 1;
        }
    }
    lli sum = 0;
    for(lli i = 0;i<given.size();i++){
        sum += max(g1[i], g2[i]);
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli size;
        cin>>size;
        vector<lli> given(size);
        for(lli i = 0;i<size;i++){
            cin>>given[i];
        }
        cout<<solve(given)<<endl;
    }
    return 0;
}
