#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool strMatch(string str, string pattern){
    int n = str.length();
    int m = pattern.length();
    if(m == 0){
        return (n==0);
    }
    bool lookup[n+1][m+1];
    memset(lookup, false, sizeof(lookup));
    lookup[0][0] = true;
    for(int j = 1;j<=m;j++){
        if(pattern[j-1] == '*'){
            lookup[0][j] = lookup[0][j-1];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j= 1;j<=m;j++){
            if(pattern[j-1] == '*'){
                lookup[i][j] = lookup[i][j-1] || lookup[i-1][j];
            }
            else if (pattern[j-1] == '?' || str[i-1] == pattern[j-1])
            {
                lookup[i][j] = lookup[i-1][j-1];
            }
            else{
                lookup[i][j] = false;
            }
            
        }
    }
    return lookup[n][m];
}
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

        string str, pattern;
        cin>>pattern>>str;
        // cout<<str<<pattern<<endl;
        if (strMatch(str, pattern))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
