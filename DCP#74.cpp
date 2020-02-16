#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, x;
    cin>>n;
    cin>>x;
    int count = 0;
    for(auto i = 1;i<=n;i++){
        if(x%i == 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
