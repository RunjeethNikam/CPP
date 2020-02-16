#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v = {1,5,10,20,100};
    int n;
    cin>>n;
    int sum = 0;
    for(int i = v.size()-1;i>= 0;i--){
        int rem = n/v[i];
        if(rem){
            sum += rem;
            n = n%v[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
