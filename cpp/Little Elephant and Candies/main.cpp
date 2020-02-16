#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    lli testCases;
    cin>>testCases;
    while(testCases--) {
        lli N, C;
        cin>>N>>C;
        lli sum = 0;
        for(lli i = 0;i<N;i++){
            lli x;
            cin>>x;
            sum += x;
        }
        if(sum <= C){
            cout<<"Yes";
        }
        else
            cout<<"No";
        cout<<endl;
    }
    return 0;
}