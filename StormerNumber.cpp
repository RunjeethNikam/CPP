#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli maxPrimeFactor(lli n){
    lli max = -1;
    while(n%2 == 0){
        n = n/2;
        max = 2;
    }
    for(lli i = 3;i*i <= n;i++){
        while(n%i == 0){
            n = n/i;
            max = i;
        }
    }
    if(n > 2){
        max = n;
    }
    return max;
}
void stormer(lli n){
    int i = 1;
    int count = 0;
    while (count < n)
    {
        lli t = i*i + 1;
        if(maxPrimeFactor(t) >= 2*i){
            cout<<i<<" ";
            count++;
        }
        i++;
    }
    
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    stormer(n);
    return 0;
}
