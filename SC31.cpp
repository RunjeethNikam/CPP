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
        vector<string> given(n);
        for(auto &i : given){
            cin>>i;
        }
        lli j = 0;
        lli result = 0;
        while(j < 10){
            lli count = 0;
            for(auto &i:given){
                count ^= (i[j]-'0');
            }
            if(count){
                result++;
            }
            j++;
        }
        cout<<result<<endl;
    }
    return 0;
}
