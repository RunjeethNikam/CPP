#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<bool> primes(1e6 + 5, true);
    // vector<int> primes;
    for (int i = 2; i*i < primes.size(); i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j < primes.size(); j += i)
            {
                primes[j] = false;
            }
        }
    }
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int x = n;
        
        // right
        int right;
        for(int i = x;i<primes.size();i++){
            if(primes[i]){
                // cout<<i<<endl;
                right = i;
                break;
            }
        }
        int left;
        for(int i =x;i>= 0;i--){
            if(primes[i]){
                // cout<<i<<endl;
                left = i;
                break;
            }
        }
        int xx = ((right - n) >= (n - left))? left:right;
        cout<<xx<<endl;
        
    }
    
    return 0;
}
