#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<vector<lli>> path(100, vector<lli>(100));
lli paths(lli n, lli m){
    if(n == 0 || m == 0){
        return 1;
    }
    else{
        if(path[n][m] != 0)
            return path[n][m];
        else
        {
            lli temp = paths(n-1, m) + paths(n, m-1);
            path[n][m] = temp;
            return temp;
        }
        
    }
}
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli n, m;
        cin>>n>>m;
        cout<<paths(n, m)<<endl;
    }
    
    return 0;
}
