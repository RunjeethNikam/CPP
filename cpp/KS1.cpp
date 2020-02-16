#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
int n, a[100010];
int cnt[2000020];
long long sum[2000020], ans;
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        int s = 0;
        ans = 0;
        for(int i = 1;i<= n;i++){
            cin>>a[i];
            s ^= a[i];
            ans += 1ll*cnt[s]*i - sum[s];
            ++cnt[s];
            sum[s] += i+1;
        }
        s = 0;
        for (int i = 1;i<= n;i++){
            s ^= a[i];
            cnt[s]--;
            sum[s] -= i+1;
        }
    }

}