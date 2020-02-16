#include<bits/stdc++.h>
using namespace std;
int n, m;
string a, b;
int wts[26];
int solve(int sizea, int sizeb){
    if(sizea == 0 or sizeb == 0){
        return 0;
    }
    if(a[sizea-1] == b[sizeb - 1]){
        return (wts[a[sizea-1] - 'a'] + solve(sizea-1, sizeb - 1));
    }
    else{
        return max(solve(sizea, sizeb-1), solve(sizea-1, sizeb));
    }
}
int main(int argc, char const *argv[])
{

    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    cin>>n>>m;
    for(int i = 0;i<26;i++){
        cin>>wts[i];
    }
    cin>>a;
    cin>>b;
    cout<<solve(a.size(), b.size());
    return 0;
}
