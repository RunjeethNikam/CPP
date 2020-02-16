#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli n, m;
        cin>>n>>m;
        lli number = n/m;
        lli nocycle = number/10;
        lli cycle = 0;
        for(lli i = 1;i<=10;i++){
            cycle += (m*i)%10;
        }        
        lli sum = cycle*nocycle;
        for(lli i = 1;i<=number%10;i++){
            sum += (m*i)%10;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
