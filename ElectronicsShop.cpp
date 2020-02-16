#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli b, n, m;
    cin>>b>>n>>m;
    vector<lli> key(n), usb(m);
    for(auto &i : key){
        cin>>i;
    }
    for (auto &i : usb)
    {
        cin >> i;
    }
    sort(key.begin(), key.end());
    sort(usb.begin(), usb.end());
    lli maxSum = 0;
    for(lli i = 0;i<n;i++){
        for(lli j = 0;j<m;j++){
            if ((key[i] + usb[j]) <= b and (key[i] + usb[j]) > maxSum){
                maxSum = key[i] + usb[j];
            }
        }
    }
    lli diff = b - maxSum;
    if(diff == b){
        cout<<-1<<endl;
    }
    else
    {
        cout << maxSum<<endl;
    }
    return 0;
}
