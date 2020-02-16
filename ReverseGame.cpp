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
        lli n, k;
        cin>>n>>k;
        vector<lli> seq(n);
        lli i = 0, x = n-1;
        while(i<seq.size()){
            seq[i] = x;
            x--, i+=2;
        }
        i = 1, x = 0;
        while (i < seq.size())
        {
            seq[i] = x;
            x++, i += 2;
        }
        for(lli i = 0;i<seq.size();i++){
            if(k == seq[i]){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
