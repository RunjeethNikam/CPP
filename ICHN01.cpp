#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    string given;
    cin>>given;
    int count = 0;
    for(auto i : given){
        if(i >= 'a' and i <= 'z'){
            count++;
        }
    }
    cout<<'(';
    for(int i = 1;i<=count;i++){
        cout<<i;
    }
    cout<<')';
    return 0;
}