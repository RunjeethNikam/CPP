#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<bool> prime(1e4+5, true);
    prime[0] = false;
    prime[1] = false;
    for(int i = 2;i*i<prime.size();i++){
        if(prime[i]){
            for(int j = i*i;j<prime.size();j+=i){
                prime[j] = false;
            }
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(prime[n-1] and prime[n+1]){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
    
    return 0;
}
