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
        lli sizea, sizeb, ms;
        cin>>sizea>>sizeb>>ms;
        vector<lli> A(sizea), B(sizeb);
        for(auto &i : A){
            cin>>i;
        }
        for(auto &i : B){
            cin>>i;
        }
        lli sum = 0;
        lli x = 0, y = 0;
        while(x < sizea && sum + A[x] <= ms){
            sum+= A[x++];
        }
        lli ans = x;
        while(y < sizeb && x>= 0){
            sum += B[y++];
            while(sum > ms && x > 0){
                sum -= A[--x];
            }
            if(sum <= ms && ans <x+y){
                ans = x+y;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
