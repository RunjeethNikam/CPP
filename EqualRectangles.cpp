#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli q;
    cin>>q;
    while (q--)
    {
         int n;
        cin>>n;
        vector<int> a(4*n);
        for(int j = 0;j<4*n;j++){
            cin>>a[j];
        }
        sort(a.begin(), a.end());
        int area = a[0] * a.back();
        bool ok = true;
        for(int i = 0;i<n;i++){
            int lf = i*2, rg = 4*n - (i*2) - 1;
            if(a[lf] != a[lf+1] || a[rg] != a[rg-1] || a[lf]* a[rg] != area){
                ok = false;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
