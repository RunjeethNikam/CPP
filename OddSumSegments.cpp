#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> odd;
        for(int i= 0;i<n;i++){
            int x;
            cin>>x;
            if(x&1){
                odd.push_back(i+1);
            }
        }
        if(odd.size()%2 != k%2 or odd.size() < k){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i = 0;i<k-1;i++){
                cout<<odd[i]<<" ";
            }
            cout<<n<<endl;
        }
    }
    
    return 0;
}
