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
        int count0 = 0, count2 = 0;
        while(n%10 == 0){
            n = n/10;
            count0++;
        }
        while(n%2 == 0){
             n = n/2;
             count2++;
        }
        if(n == 1 and (count0 >= count2)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}
