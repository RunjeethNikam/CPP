#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli testCases;
    cin>>testCases;
    while(testCases--){
        lli X, Y, K, N;
        cin>>X>>Y>>K>>N;
        lli required = X - Y;
        bool flag = false;
        if(required > 0) {
            for(lli i = 0 ;i<N;i++) {
                lli Pi, Ci;
                cin>>Pi>>Ci;
                if(Pi >= required){
                    if(K >= Ci){
                        flag = true;
                    }
                }
            }
            if(!flag){
                cout<<"UnluckyChef";
            }
            else
                cout<<"LuckyChef";
        }
        else{
            for(lli i = 0 ;i<N;i++) {
                lli Pi, Ci;
                cin>>Pi>>Ci;
            }
            cout<<"LuckyChef";
            flag = true;
        }
        cout<<endl;
    }
    return 0;
}