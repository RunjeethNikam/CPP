#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    vector<bool> x(1e7, true);
    vector<lli> prime;
    for(lli i =2;i<x.size();i++){
        if(x[i]){
            for(lli j = i*i;j<x.size();j+= i){
                x[j] = false;
            }
            prime.push_back(i);
        }
    }
    cout<<prime.size()<<endl;
    for(lli i = 70000;i<70400;i++){
        cout<<prime[i]<<" ";
    }
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli product = accumulate(prime.begin(), prime.begin() + n, 1, multiplies<lli>());
        cout<<product<<endl;
        lli nx = upper_bound(prime.begin(), prime.end(), product) - prime.begin();
        cout<<prime[nx]<<" "<<n<<endl;
        // if(prime[nx] - product  > 1){
        //     cout<<prime[nx] - product<<endl;
        // }
        // else{
        //     cout<<prime[nx+1]-product<<endl;
        // }
    }
    return 0;
}
