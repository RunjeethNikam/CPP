#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        vector<int> given(size);
        for(int i = 0;i<size;i++){
            cin>>given[i];
        }
        vector<int> g1(size);
        vector<int> g2(size);
        g1[0] = 1;
        g2.back() = 1;
        for(int i = 1;i<size;i++){
            int mx = 1;
            for(int j = 0;j<i;j++){
                if(given[i] > given[j]){
                    mx = max(mx, g1[j] +1);
                }
                else if(given[i] == given[j]){
                    mx = max(mx,g1[j]);
                }
            }
            g1[i] = mx;
        }
        for(int i = 0;i<size;i++){
            cout<<g1[i]<<" ";
        }
    }
    return 0;
}
