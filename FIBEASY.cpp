#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<lli> fib(60);
lli last(int i){
    return fib[i%60];
}
int main(int argc, char const *argv[])
{
    fib[0] = 0;
    fib[1] = 1;
    for(lli i = 2;i< 60;i++){
        fib[i] = (fib[i-1] + fib[i-2])%10;
    }
    
    lli test;
    cin>>test;
    while (test--)
    {
        lli n;
        cin>>n;
        lli i;
        for(i = 0;i<100;i++){
            if(n/(1<<i) == 0){
                break;
            }
        }
        // cout<<i<<endl;
        i--;
        cout<<last((1<<i) - 1)<<endl;
    }
    
    return 0;
}
