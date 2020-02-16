#include<bits/stdc++.h>
#define lli long long int
using namespace std;
bool prime(int n){
    for(int i = 2;i<=(sqrt(n)); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli n;
        cin>>n;
        double sqrt_n = sqrtl(n);
        if(sqrt_n == int(sqrt_n)){
            if(prime(int(sqrt_n))){
                cout<<"1"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        else{
            cout<<"0"<<endl;
        }
    }
    
    return 0;
}
