#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(lli given){
    lli count = 0;
    while(given>0){
        count += given%10;
        given /= 10;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli size;
        cin>>size;
        vector<lli> given(size);
        for(auto i = 0;i<size;i++){
            cin>>given[i];
        }
        lli mx = -1;
        for(auto i = 0;i<given.size();i++){
            for(auto j = i+1;j<given.size();j++){
                lli product = given[i] * given[j];
                lli product_sum = solve(product);
                if(mx < product_sum){
                    mx = product_sum;
                }
            }
        }
        cout<<mx<<endl;
    }
    
    return 0;
}
