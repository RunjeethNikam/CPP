#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> primes(1001, -1);
    for(int i = 2;i<primes.size();i++){
        if(primes[i] == -1){
            for(int j = i*i;j<primes.size();j += i){
                if(primes[j] != -1){
                    continue;
                }
                else{
                    primes[j] = i;
                }
            }
            primes[i] = i;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> st;
        if(n == 1){
            cout<<"0"<<endl;
            continue;
        }
        st.insert(primes[n]);
        n = n/primes[n];

        if(n == 0){
            cout<<"0"<<endl;
            continue;
        }
        else if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        st.insert(primes[n]);
        n= n/primes[n];
        if(n == 0){
            cout<<"0"<<endl;
            continue;
        }
        else if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        st.insert(primes[n]);
        n = n/primes[n];
        if(n == 0 or st.size() != 3){
            cout<<"0"<<endl;
            continue;
        }
        else if(n==1 and st.size() == 3){
            cout<<"1"<<endl;
            continue;
        }
    }
    // vector<int> prime;
    // for(int i = 2;i<1001;i++){
    //     if(primes[i]){
    //         int j = i*i;
    //         while(j<primes.size()){
    //             primes[j] = false;
    //             j += i;
    //         }
    //         prime.push_back(i);
    //     }
    // }
    // int t;
    // cin>>t;
    // while (t--)
    // {
    //     int n;
    //     cin>>n;
    //     int count = 0;
    //     int it = lower_bound(prime.begin(), prime.end(), n) - prime.begin();
    //     while(it >= 0 and n != 1 and count <= 3){
    //         if(n%prime[it] == 0){
    //             n = n/prime[it];
    //             it--;
    //             count++;
    //         }
    //         else
    //         it--;
    //     }
    //     if(count == 3 and n == 1){
    //         cout<<"1"<<endl;
    //     }
    //     else{
    //         cout<<"0"<<endl;
    //     }
    // }
    
    return 0;
}
