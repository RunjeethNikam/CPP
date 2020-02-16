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
        lli a, b, c;
        cin>>a>>b>>c;
        if(abs(a-c) < abs(b-c)){
            cout<<"Cat A";
        }
        else if(abs(a-c) > abs(b-c)){
            cout<<"Cat B";
        }
        else{
            cout<<"Mouse C";
        }
        cout<<endl;
    }
    return 0;
}
