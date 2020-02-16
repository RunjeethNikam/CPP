#include<bits/stdc++.h>
using namespace std;
int t;
template <typename T>
void operator<<(ostream &cout,vector<T> hi){
    for(auto i:hi){
        cout<<i;
    }
}
int main(int argc, char const *argv[])
{
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> given(n);
        for(int i = 0;i<n;i++){
            cin>>given[i];
        }
        // vector<int> given1 = given;
        bool flag = next_permutation(given.begin(), given.end());
        if(flag){
            cout<<given;
        }
        else{
            cout<<"-1";
        }
        cout<<endl;
    }
    
    return 0;
}
