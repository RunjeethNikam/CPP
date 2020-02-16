#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli fact(lli n){
    lli sum = 1;
    for(lli i = 1;i<=n;i++){
        sum *= i;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    string given;
    cin>>given;
    for(int i = 0;i < fact(given.size());i++){
        bool flag = true;
        for(int j = 0;j<given.size();j++){
            if((given[j]-'0') == j){
                flag = false;
            }
        }
        if(flag){
            cout<<given<<endl;
        }
        next_permutation(given.begin(), given.end());
    }
    return 0;
}
