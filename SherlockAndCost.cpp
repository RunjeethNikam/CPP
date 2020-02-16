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
        vector<int> given(n);
        for(int i = 0;i<n;i++){
            cin>>given[i];
        }
        vector<int> given1(n), given2(n);
        given1[0] = 1;
        given2[0] = given[0];
        for(int i = 1;i<n;i++){
            if(abs(given1[i-1] - 1) < abs(given1[i-1] - given[i])){
                given1[i] = given[i];
            }
            else{
                given1[i] = 1;
            }
        }
        for(int i = 1;i<n;i++){
            if(abs(given2[i-1] - 1) < abs(given2[i-1] - given[i])){
                given2[i] = given[i];
            }
            else{
                given2[i] = 1;
            }
        }
        int sum1 = 0, sum2 = 0;
        for(int i = 1;i<n;i++){
            sum1 += abs(given1[i] - given1[i-1]);
        }
        // cout<<endl;
        for(int i = 1;i<n;i++){
            sum2 += abs(given2[i] - given2[i-1]);
        }
        cout<<max(sum1, sum2)<<endl;
    }
    return 0;
}
