#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli size, q;
        cin>>size>>q;
        vector<lli> Bi(size, 0);
        for(lli i = 1;i< size;i++){
            cin>>Bi[i];
            if(i%2 == 0){
                Bi[i] = -Bi[i];
            }
        }
        for(lli i = 2;i< size;i++){
            Bi[i] = Bi[i] + Bi[i-1];
        }
        while(q--){
            lli p, q;
            cin>>p>>q;
            if(q < p){
                swap(p, q);
            }
            if(p == q){
                cout<<"UNKNOWN"<<endl;
                continue;
            }
            else if((q-p) == 1){
                cout<<Bi[p]<<endl;
            }
            else if((q - p)&1){
                q--;
                lli sum1 = Bi[q] - Bi[p-1];
                if(p&1){
                    cout<<sum1<<endl;
                }
                else{
                    cout<<(sum1 * 1)<<endl;
                }
            }
            else{
                cout<<"UNKNOWN"<<endl;
                continue;
            }
        }
    }
    return 0;
}
