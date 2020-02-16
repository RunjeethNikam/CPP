#include<bits/stdc++.h>
using namespace std;
int x(int n){
    int half = n/2;
    int half_1 = half-1;
    int sum = ((half_1/2) * (half+1 + n))*2;
    sum += half
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    if(n == 0){
        cout<<0<<endl;
        return 1;
    }
    int i = 3;
    int sum  = 0;
    while(1){
        sum += x(i-1)*4 - (i-1)*4;
        // cout<<sum<<" "<<x(i-1)<<" "<<x(i-2)<<" "<<i<<endl;
        if((n / sum) == 0){
            break;
        }
        i += 2;
    }
    return 0;
}
