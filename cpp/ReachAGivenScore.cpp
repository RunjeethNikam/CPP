#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli n;
        cin>>n;
        vector<lli> scores(n+1,0);
        scores[0] = 1;
        for(auto i = 3;i<= n;i++){
            scores[i] += scores[i-3];
        }    
        for(auto i = 5;i<= n;i++){
            scores[i] += scores[i-5];
        }    
        for(auto i = 10;i<= n;i++){
            scores[i] += scores[i-10];
        }    
        cout<<scores[n];
        cout<<endl;
    }
        
    return 0;
}
