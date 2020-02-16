#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while(t--){
        lli size;
        cin>>size;
        lli sum1 = 0;
        lli sum2 = 0;
        for(auto i = 0;i<size/2;i++){
            lli element;
            cin>>element;
            sum1 += element;
        }
        for(auto i = size/2;i<size;i++){
            lli element;
            cin>>element;
            sum2 += element;
        }
        cout<<(sum1 * sum2)<<endl;
    }
    return 0;
}
