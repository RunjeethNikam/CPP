#include<bits/stdc++.h>
using namespace std;
#define lli long double
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli n, m;
    cin>>n>>m;
    lli result = 0;
    for(lli i = 0;i<m;i++){
        lli a, b, k;
        cin>>a>>b>>k;
        float sum = (b-a+1)*k/(n*1.0);
        result += sum;
        if(result<0){
            cout<<"hi";
        }
    }
    cout<<floor(result)<<endl;
    return 0;
}
