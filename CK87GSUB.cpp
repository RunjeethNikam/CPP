#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli binomialCoeff(lli n,lli k) 
{ 
    lli C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; 
  
    for (lli i = 1; i <= n; i++) 
    { 
        // Compute next row of pascal triangle using 
        // the previous row 
        for (lli j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli result = 0;
        string given;
        cin>>given;
        lli i = 0;
        for(lli j = 1;j<given.size();j++){
            if(given[i] != given[j]){
                if(j-i+1 > 2){
                    result += binomialCoeff(j-i, 2);
                }
                if(i){
                        if(given[i-1] == given[j]){
                            result += 1;
                        }
                    }
                i = j;
            }
        }
        if(i != given.size()-1){
            result += binomialCoeff(given.size()-i, 2);
        }
        cout<<result<<endl;
    }
    return 0;
}
