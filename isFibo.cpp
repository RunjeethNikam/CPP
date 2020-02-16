#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool perfectSquare(unsigned long long int x){
    unsigned long long int y = sqrt(x);
    return (y*y == x);
}
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
        unsigned lli n;
        cin>>n;
        if(perfectSquare(5*n*n + 4) || perfectSquare(5*n*n - 4)){
            cout << "IsFibo" << endl;
        }
        else{
            cout << "IsNotFibo" << endl;
        }
    }
    return 0;
}
