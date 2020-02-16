#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while(t--){
        lli n, p;
        cin>>n>>p;
        vector<lli> D(n);
        lli xxx = 1;
        for(auto &i : D){
            cin>>i;
        }
        lli x = -1, y = -1, z = -1;
        bool flag = true;
        for(auto &i : D){
            if((p%i) != 0){
                x = i;
            }
            if(((p%i) != 0) or ((i%xxx) != 0)){
                flag = false;
                
            }   
            if((p%i) == 0){  
                if((i%xxx) != 0){
                    y = i;
                    z = xxx;
                }
            }
            xxx = i;
        }
        solve();
        cout<<endl;
    }
    return 0;
}
void solve(bool flag, int x, int y, int z, vector<int> D, int p){
    int n = D.size();
    if(flag == false){
        cout<<"YES ";    
        if(y > z)
            swap(y, z);
        if(x == -1){
            vector<int> result(n, 0);
            for(int i = D.size()-1;i>= 0;i--){
                if((z == D[i])){
                    result[i] = (p/z)-1;
                    p = z;
                }
                else if(D[i] == y){   
                    result[i] = (p/y)+1;
                }
                else{
                    result[i] = 0; 
                }
            }
            for(auto i : result){
                cout<<i<<" ";
            }
        }
        else{
            for(auto i: D){
                if(i == x){
                    cout<<((p/x)+1)<<" ";
                }
                else{
                    cout<<"0 ";
                }
            }
        }
    }
    else{
        cout<<"NO";
    }
}
