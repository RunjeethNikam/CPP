#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    vector<int> primes;
    vector<bool> prime(2000+1, true);
    for(int i = 2;i<prime.size();i++){
        if(prime[i]){
            int j = i*i;
            while(j < prime.size()){
                prime[j] = false;
                j += i;
            }
            primes.push_back(i);
        }
    }
    // for(auto i = 0;i<10;i++){
    //     cout<<primes[i]<<" ";
    // }
    while(t--){
        int A, B;
        cin>>A>>B;
        int C = A+B;
        int it =lower_bound(primes.begin(), primes.end(), C) - primes.begin();
        if(primes[it] == C){
            cout<<primes[it+1] - primes[it];
        }
        else{
            cout<<(primes[it] - C);
        }
        
    }
    return 0;
}
