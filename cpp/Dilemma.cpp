#include<bits/stdc++.h>
using namespace std;
#define lli long long int  
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while(t--){
        string given;
        cin>>given;
        lli count = 0;
        for(auto i = 0;i<given.size();i++){
            if(given[i] == '1')
                count++;
        }
        if(count & 1){//odd
            cout<<"WIN";
        }
        else
        {
            cout<<"LOSE";
        }
        cout<<endl;
        
    }
    return 0;
}
