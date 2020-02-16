#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string x = "abc";
    int n;
    string s, t;
    cin>>n;
    cin>>s>>t;
    int count = 1;
    while(((x+x[0]).find(s) != x.npos || (x+x[0]).find(t) != x.npos) && count <= 6){
        next_permutation(x.begin(), x.end());
        count++;
    }
    if(count == 7){
        cout<<"NO";
        return 1;
    }
    else{
        cout<<"YES"<<endl;
        for(int i = 2;i<=n;i++){
            x += x;
        }
        cout<<x;
    }
    return 0;
}

