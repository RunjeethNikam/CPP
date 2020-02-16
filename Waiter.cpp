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
    vector<lli>  prime(10000, true);
    prime[0] = 0;
    prime[1] = 0;
    for(lli i = 2;i*i <= prime.size();i++){
        if(prime[i]){
            for(lli j = i*i;j<prime.size();j+=i){
                prime[j] = false;
            }
        }
    }
    vector<lli> needed;
    for(lli i = 2;i<prime.size();i++){
        if(prime[i]){
            needed.push_back(i);
        }
    }
    lli n, Q;
    cin>>n>>Q;
    stack<lli> given;
    for(lli i = 0;i<n;i++){
        lli x;
        cin>>x;
        given.push(x);
    }
    vector<stack<lli>> result;

    for(lli i = 0;i<Q;i++){
        stack<lli> hi;
        stack<lli> temp;
        while(!given.empty()){
            if(given.top()%needed[i] == 0){
                hi.push(given.top());
                given.pop();
            }
            else{
                temp.push(given.top());
                given.pop();
            }
        }
        given= temp;
        result.push_back(hi);
    }
    for(lli i = 0;i<result.size();i++){
        stack<lli> temp = result[i];
        while(!temp.empty()){
            cout<<temp.top()<<endl;
            temp.pop();
        }
    }while(!given.empty()){
        cout<<given.top()<<endl;
        given.pop();
    }
    return 0;
}