#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    while(1){
        int n;
        cin>>n;
        if(n == 0){
            break;
        }
        bool flag = true;
        int count  = 1;
        stack<int> st;
        for(int i = 0;i<n;i++){
            int car;
            cin>>car;
            if(count == car){
                count++;
            }
            else{
                if(st.empty()){
                    st.push(car);
                }
                else{
                    if(st.top() > car){
                        st.push(car);
                    }
                    else{
                        // cout<<"no";
                        flag = false;
                    }
                }
            }
            while(!st.empty() && st.top() == count){
                st.pop();
                count++;
            }
        }
        if(flag){
            while(!st.empty() && st.top() == count){
                st.pop();
                count++;
            }
            if(count== n+1){
                cout<<"yes";
            }
            else{
                cout<<"no";
            }
        }
        else{
            cout<<"no";
        }
        cout<<endl;
    }
    return 0;
}
