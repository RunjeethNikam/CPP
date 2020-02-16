#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int cutRod(lli price[], lli n) 
{ 
   lli val[n+1]; 
   val[0] = 0; 
   lli i, j; 
  
   // Build the table val[] in bottom up manner and return the last entry 
   // from the table 
   for (i = 1; i<=n; i++) 
   { 
       lli max_val = INT_MIN; 
       for (j = 0; j < i; j++) 
         max_val = max(max_val, price[j] + val[i-j-1]); 
       val[i] = max_val; 
   } 
  
   return val[n]; 
} 

int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        // memset(dp, 0, sizeof(dp));
        lli n;
        cin>>n;
        lli arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        cout<<cutRod(arr, n);
    }
    return 0;
}
