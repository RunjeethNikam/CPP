#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        // bool flag = true;
        while(n> 0){
            if(prime(n%10)){
                sum += n%10;
            }   
            n = n/10;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}