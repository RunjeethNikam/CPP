#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        vector<lli> given(n);
        for(auto &i : given){
            cin>>i;
        }
        vector<lli> temp(given.begin(), given.end());
        sort(temp.begin(), temp.end());
        int j= 0;
        for(lli i = 0;i<given.size();i++){
            if(given[i] == temp[j]){
                j++;
            }
        }
        cout<<(n-j)<<endl;

    }
    return 0;
}
