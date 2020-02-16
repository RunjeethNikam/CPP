#include<bits/stdc++.h>
using namespace std;
#define lli long long int
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
        lli n;
        cin>>n;
        vector<lli> given(n);
        for(auto &i : given){
            cin>>i;
        }
        lli sum = given[0];
        lli i = 1;
        lli count = 0;
        while(i < n){
            count++;
            lli temp = sum;
            while(temp!=0 and i<n){
                sum += given[i];
                i++;
                temp--;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
