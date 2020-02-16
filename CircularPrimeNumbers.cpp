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
        int bits = N.size();
        bool flag = true;
        for (int i = 0; i < bits; i++)
        {
            N = N.substr(1, N.size()-1) + N[0];
            if(!prime(stoi(N))){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        cout<<endl;
    }
    
    return 0;
}
