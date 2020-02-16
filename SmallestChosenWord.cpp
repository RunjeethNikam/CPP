#include<bits/stdc++.h>
using namespace std;
string solve1(string s1, string s2, string s3){
    stack<char> st;
    for(auto element : s2){
        if(st.empty()){
            st.push(element);
        }
        else{
            while(!st.empty() && st.top() > element){
                st.pop();
            }
            st.push(element);
        }
    }
    while(!st.empty() && st.top() > s3[0]){
        st.pop();
    }
    string x = "";
    string y = "";
    while(!st.empty()){
        x = y + st.top() + x;
        st.pop();
    }
    return (s1 + x + s3);
}
string solve2(string s1, string s2, string s3){
    stack<char> st;
    for(auto element : s2){
        if(st.empty()){
            st.push(element);
        }
        else{
            while(!st.empty() && st.top() > element){
                st.pop();
            }
            st.push(element);
        }
    }
    while(!st.empty() && st.top() >= s3[0]){
        st.pop();
    }
    string x = "";
    string y = "";
    while(!st.empty()){
        x = y + st.top() + x;
        st.pop();
    }
    return (s1 + x + s3);
}
int main(int argc, char const *argv[])
{
    int size1, size2, size3;
    cin>>size1>>size2>>size3;
    stack<char> st;
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    string ss1 = solve1(s1, s2, s3);
    string ss2 = solve2(s1, s2, s3);
    if(lexicographical_compare(ss1.begin(), ss1.end(), ss2.begin(), ss2.end())){
        cout<<ss1;
    }
    else{
        cout<<ss2;
    }

 
    return 0;
}