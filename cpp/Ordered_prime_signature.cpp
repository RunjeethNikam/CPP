#include<bits/stdc++.h>
using namespace std;
void solve(int temp){
    int count  = 0;
    for(int i = 1;i<sqrt(temp);i++){
        if(temp%i == 0){
            if(i == temp/i)
            count++;
            else{
                count += 2;
            }
        }
    }
    cout<<count<<endl;
}
int main(int argc, char const *argv[])
{
    vector<int> prime(1e6 + 5, -1);
    for(int i = 2;i<prime.size();i++){
        if(prime[i] == -1){
            for(int j = i*i;j<prime.size();j+=i){
                if(prime[j] != -1)
                continue;
                else
                {
                    prime[j] = i;
                }
                
            }
            prime[i] = i;
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int temp = n;
        map<int, int> mp;
        while(n != 1){
            mp[prime[n]]++;
            n = n/prime[n];
        }
        for(auto i = mp.rbegin(); i != mp.rend();i++){
            cout<<((*i).second)<<" ";
        }
        cout<<endl;
        solve(temp);
    }
    
    return 0;
}
