#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> given(n+5);
        given[0] = INT_MAX;
        given[1] = INT_MAX;
        given[2] = INT_MAX;
        given[3] = INT_MAX;
        given[4] = INT_MAX;
        for(int i = 5;i<n+5;i++){
            cin>>given[i];
            if(given[i] > 750 and given[i] < 350){
                given[i] = INT_MAX;
            }
        }
        int res = 0;
        for(int i = 5;i<n+5;i++){
            int flag = true;
            for(int j = 1;j<=5;j++){
                if(given[i] >= given[i-j]){
                    flag = false;
                }
            }
            if(flag){
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
