#include<bits/stdc++.h>
#define lli  long long int
using namespace std;
int main(){
    lli n;
    cin>>n;
    vector<lli> fib(n);
    fib[0] = 0;
    fib[1] = 1;
    for(int i =2;i<fib.size();i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    vector<lli> shor;
    do{
        shor.clear();
        for(int i = 1;i<fib.size();i += 2){
            shor.push_back(fib[i]);
        }
        fib = shor;
    }while(shor.size() != 1);
    cout<<shor[0]<<endl;
}