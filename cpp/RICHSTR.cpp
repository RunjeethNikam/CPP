#include <iostream>
#include<map>
#include<vector>
#include<string>
#define lli long long int
using namespace std;
int main() {
    lli t;
    cin>>t;
    while(t--){
        lli N, Q;
        cin>>N>>Q;
        map<char, vector<lli>> dict;
        string given;
        cin>>given;
        for(char i = 'a';i<= 'z';i++){
            dict[i] = vector<lli>(4,0);
        }
        for(int i = 0;i < given.length();i++){
            char element = given[i];
            if(dict[element][0] != 0){
                dict[element][0]++;
                // dict[element][1] = i+1;
                dict[element][2] = i+1;
                int length = (dict[element][2] - dict[element][1] +1);
                dict[element][3] = (dict[element][0] > length/2)? 1:0;
                // cout<<length<<" "<<element<<" "<<dict[element][3]<<endl;
            }
            else{
                dict[element][0]++;
                dict[element][1] = i+1;
                dict[element][2] = i+1;
            }
        }
        for(int i = 0;i<Q;i++){
            int L, R;
            cin>>L>>R;
            bool flag = true;
            for(auto element : dict){
                if(element.second[0] >= 2){
                    if(element.second[3] == 1){
                        if(L <= element.second[1] & element.second[2] <= R){
                            flag = false;
                        }
                    }
                }
            }
            if(flag){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }    
}
