#include<bits/stdc++.h>
using namespace std;
int precedence(char ope){
    if(ope == '+'){
        return 1;
    }
    else if(ope == '-'){
        return 2;
    }
    else if(ope == '*'){
        return 3;
    }
    else if(ope == '/'){
        return 4;
    }
    else if(ope == '^'){
        return 5;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        stack<char> st;
        string output = "";
        string input;
        cin>>input;
        for(auto cha : input){
            if(cha >= 'a' && cha <= 'z'){
                output += cha;
                continue;
            }
            if(cha == '('){
                st.push(cha);
            }
            else if(cha == ')'){
                while(!st.empty() && st.top() != '('){
                    output += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && (precedence(st.top()) > precedence(cha))){
                    output += st.top();
                    st.pop();
                }
                st.push(cha);
            }
        }
        while(!st.empty()){
            output += st.top();
            st.pop();
        }
        cout<<output<<endl;
    }
    
    return 0;
}
