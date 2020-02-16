#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        lli N, M;
        cin>>N>>M;
        vector<lli> Hi(N+1), Bi(M+1);
        vector<bool> boo(N+1, true);
        for(int i = 1;i<=N;i++){
            cin>>Hi[i];
        }
        for(int i = 1;i<=M;i++){
            cin>>Bi[i];
        }
        for(int i = 1;i<= M;i++){
            for(int j = i;j<= N;j += i){
                if(boo[j]){
                    if(Hi[j] <= Bi[i]){
                        Hi[j] = i;
                        boo[j] = false;
                    }
                }
            }
        }
        for(int i = 1;i<= N;i++){
            if(boo[i]){
                Hi[i] = -1;
            }
        }
        for(int i = 1;i<= N;i++){
            cout<<Hi[i]<<endl;
        }
    }
    return 0;
}
