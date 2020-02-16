#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool check(string given){
    stack<char> st;
    for(auto i:given){
        if(st.empty() or i == '('){
            st.push(i);
        }
        else{
            if(st.top() == '('){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
    }
    return st.empty();
}
void solve(string given, lli k){
    lli tillNow = 0;
    lli i = 1;
    if(given[0] == ')'){
        tillNow++;
    }
    while(k != tillNow and i<given.size()){
        if(given[i] != given[i-1] and given[i] == ')'){
            tillNow++;
            if(tillNow == k){
                break;
            }
        }
        i++;
    }
    if(k == tillNow){
        for(lli j = 0;j<given.size();j++){
            if(j != i){
                cout<<given[j];
            }
        }
        return ;
    }
    i = given.size()-2;
    if(given.back() == '('){
        tillNow++;
    }
    while(k != tillNow and i>= 0){
        if(given[i] != given[i+1] and given[i] == '('){
            tillNow++;
            if(tillNow == k){
                break;
            }
        }
        i--;
    }
    if(tillNow != k){
        cout<<-1;
    }
    else{
        for(lli j = 0;j<given.size();j++){
            if(j != i){
                cout<<given[j];
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;cin>>t;
    while(t--){
        
        string given;
        cin>>given;
        lli k;
        cin>>k;
        if(check(given)){
            solve(given, k);
        }
        else{
            if(k == 1){
                cout<<given;
            }
            else{
                cout<<-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
