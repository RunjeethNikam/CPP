#include<bits/stdc++.h>
using namespace std;
// #define lli long long int
#define MOD (1000000007)
int main(int argc, char const *argv[])
{
    int N, M;
    cin>>N>>M;
    int answer = 1;
    for(int i = 1;i<=M;i++){
        answer = ((answer%MOD) * (i%MOD))%MOD;
    }
    cout<<answer<<endl;
    return 0;
}
