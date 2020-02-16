#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class Stack{
    list<lli> st;
    list<lli>::iterator mid = st.begin();
    public:
    void deleteMid(){
        auto temp = mid;
        if(st.size()&1){
            mid--;
        }
        else{
            mid++;
        }
        st.erase(temp);
    }
    lli Mid(){
        return *mid;
    }
    lli top(){
        if(st.size()){
            return st.back();
        }
        return INT64_MAX;
    }
    void push(int data){
        st.push_back(data);
        if(st.size()&1){
            mid++;
        }
    }
    void pop(){
        st.pop_back();
        if(st.size()%2 == 0){
            mid--;
        }
    }
    lli size(){
        return st.size();
    }
    bool empty(){
        return st.size() == 0;
    }
    void print(){
        for(auto it = st.begin();it!= st.end();it++){
            cout<<*it<<" ";
        }
    }
};
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    Stack st;
    
    return 0;
}
