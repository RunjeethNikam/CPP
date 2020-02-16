#include<bits/stdc++.h>
using namespace std;
int solve(int N){
    int sum = 0;
    for(int i = 1;i<=sqrt(N);i++){
        if(!(N%i)){
            if( i == sqrt(N))
                sum += i;
            else{
                sum += i;
                sum += N/i;
            }
        }
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int test;
    cin>>test;
    while(test--){
        int N;
        cin>>N;
        int sum = 0;
        for(int i = 1;i<=sqrt(N);i++){
            if(!(N%i)){
                if( i == sqrt(N))
                    sum += solve(i);
                else{
                    sum += solve(i);
                    sum += solve(N/i);
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
