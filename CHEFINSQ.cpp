#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli nCr(lli n, lli k) 
{ 
    lli C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (lli i = 1; i <= n; i++) 
    {  
        for (lli j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 
int main(int argc, char const *argv[])
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli N, K;
        cin >> N >> K;
        vector<lli> given(N);
        map<lli, lli> mp;
        for (lli i = 0; i < N; i++)
        {
            cin >> given[i];
            mp[given[i]]++;
        }
        lli result = 0;
        for (auto it = mp.begin(); it != mp.end() and K >= 0; it++)
        {
            if(it->second > K){
                result += nCr(it->second, K);
                break;
            }
            else if(it->second == K){
                result = 1;
                break;
            }
            else{
                K = K - it->second;
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
