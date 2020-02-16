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
        lli count = 0;
        for(lli i = 1;i<= sqrt(n);i++){
            if(n%i == 0){
                if(i == n/i){
                    if(i%2 == 0){
                        count++;
                    }
                    // cout<<i<<" 1  "<<endl;
                }
                else{
                    if(i%2 == 0){
                        count++;
                        // cout << i << " 2  " << endl;
                    }
                    if((n/i)%2 == 0){
                        count++;
                        // cout << n / i << " 3  " << endl;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
