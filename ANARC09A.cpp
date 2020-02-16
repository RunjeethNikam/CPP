#include<bits/stdc++.h>
using namespace std;
int wt(char last, char last2){
    if(last == '{' and last2 == '{'){
        return 1;
    }
    if(last == '}' and last2 == '}'){
        return 1;
    }
    if(last == '}' and last2 == '{'){
        return 2;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int no = 1;
    while(1){
        string given;
        cin>>given;
        if(given.find('-') != given.npos){
            break;
        }
        stack<char> st;
        for(auto element : given){
            if(st.empty() or element == '{'){
                st.push(element);
            }
            else{
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    st.push(element);
                }
            }
        }
        int sum = 0;
        while(!st.empty()){
            auto last = st.top();
            st.pop();
            auto last2 = st.top();
            st.pop();
            sum += wt(last2, last);
        }
        cout<<no<<". "<<sum<<endl;
        no++;
    }
    return 0;
}
