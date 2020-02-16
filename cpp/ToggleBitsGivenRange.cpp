#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli N, L, R;
        cin>>N>>L>>R;
        L--;
        R--;
        lli z = 0;
        for(auto i = L;i<=R;i++){
            z = z|1<<(i);
        }
        cout<<(N^z)<<endl;
    }
    return 0;
}
