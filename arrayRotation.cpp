#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void leftRotate(vector<lli> given, lli r){
    r = r%given.size();
    for(lli i = 0;i<r;i++){
        lli front = given.front();
        for(lli j = 0;j<(given.size()-1);j++){
            given[j] = given[j+1];
        }
        given[given.size()-1] = front;
    }
    for(auto &i : given){
        cout<<i<<" ";
    }
    cout<<endl<<r;
}
void rightRotate(vector<lli> given, lli r){
    r = r%given.size();
    for(lli i = 0;i<r;i++){
        lli back = given.back();
        for(lli j = given.size()-1;j > 0;j--){
            given[j] = given[j-1];
        }
        given[0] = back;
    }
    for(auto &i : given){
        cout<<i<<" ";
    }
    cout<<endl<<r;
}
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli size, r;
    cin>>size>>r;
    vector<lli> given(size);
    for(auto &i :given){
        cin>>i;
    }
    rightRotate(given, r);
    return 0;
}
