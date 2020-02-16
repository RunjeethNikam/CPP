#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(int m, int n){
    int count[m][n];
    for(int i = 0;i<m;i++){
        count[i][0] = 1;
    }
    for(int i = 0;i<n;i++){
        count[0][i] = 1;
    }
    for(int i = 1;i<m;i++){
        for(int j = 1;j<n;j++){
            count[i][j] = count[i-1][j] + count[i][j-1];
        }
    }
    return count[m-1][n-1];
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n, m;
        cin>>n>>m;
        cout<<solve(n, m)<<endl;
    }
    return 0;
}
