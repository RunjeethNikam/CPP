#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prime(1e6 + 5, true);
    for(int i = 2;i*i < prime.size();i++){
        if(prime[i]){
            for(int j = i*i;j<prime.size();j+= i){
                prime[j] = false;
            }
        }
    }
    prime[1] = false;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n == 2){
            cout<<"No";
        }
        else if(n%2==0)
        {
            cout<<"Yes";
        }
        else{
            bool flag = true;
            for(int i = 2;i<n;i++){
                if(prime[i]){
                    int first = i;
                    int second = n - i;
                    if(prime[second]){
                        cout<<"Yes";
                        flag = false;
                        break;
                    }
                }
            }
            if(flag){
                cout<<"No";
            }
        }
        cout<<endl;
        
    }
    
}