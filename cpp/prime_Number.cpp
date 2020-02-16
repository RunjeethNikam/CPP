#include<bits/stdc++.h>
using namespace std;
bool solve(int n){
    for(int i = 2;i<= sqrt(n);i++){
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
        if(solve(n)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
