#include<bits/stdc++.h>
using namespace std;
int wt(char x){
    if(x == 'H'){
        return 1;
    }
    else if(x == 'C'){
        return 12;
    }
    else{
        return 16;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    string given;
    cin>>given;
    stack<int> st;
    for(auto element : given){
        if(element >= 'A' and element <= 'Z'){
            st.push(wt(element));
        }
        else if(element == '('){
            st.push(-1);
        }
        else if(element == ')'){
            int sum = 0;
            while(st.top() != -1){
                sum += st.top();
                st.pop();
            }
            st.pop();
            st.push(sum);
        }
        else{
            int last = st.top();
            st.pop();
            st.push(last * (element - '0'));
        }
    }
    int sum = 0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    cout<<sum<<endl;
    return 0;
}
