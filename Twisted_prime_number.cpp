#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i =2;i<=sqrt(n);i++){
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
    while (t--)
    {
        string N;
        cin>>N;
        if(prime(stoi(N))){
            reverse(N.begin(), N.end());
            if(prime(stoi(N)))
            cout<<"Yes";
            else
            {
                cout<<"No";
            }
            
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
    
    return 0;
}
