#include<bits/stdc++.h>
using namespace std;
int frac[100005];
#define mod %1000000007
int main(int argc, char const *argv[])
{
    frac[1] = 1;
    frac[0] = 1;
    for(int i = 2;i<100005;i++){
        frac[i] = ((frac[i-1])mod*(i)mod)mod;
    }
    int T;
    cin>>T;
    while(T--){
        int x;
        cin>>x;
        cout<<frac[x]<<endl;
    }
    return 0;
}
