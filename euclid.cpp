// for those who want the basic version of euclid algorithm,
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli gcd(lli a, lli b){
    while(a != b){
        if(a > b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main(int argc, char const *argv[])
{
    lli a, b;
    cin>>a>>b;
    cout<<gcd(max(a,b), min(a,b));
    return 0;
}
