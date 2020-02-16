#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        string given;
        cin>>given;
        int i;
        for(i = 0;i<given.size()-3;i++){
            if(given[i] == '?'){
                if((given[i] == '?' or given[i] == 'C') and (given[i+1] == '?' or given[i+1] == 'H') and (given[i+2] == '?' or given[i+2] == 'E') and (given[i+3] == '?' or given[i+3] == 'F')){
                    given[i] = 'C';
                    given[i+1] = 'H';
                    given[i+2] = 'E';
                    given[i+3] = 'F';
                }
                else{
                    given[i] = 'A';
                }
            }
            else if(given[i] == 'C'){
                if((given[i] == '?' or given[i] == 'C') and (given[i+1] == '?' or given[i+1] == 'H') and (given[i+2] == '?' or given[i+2] == 'E') and (given[i+3] == '?' or given[i+3] == 'F')){
                    given[i] = 'C';
                    given[i+1] = 'H';
                    given[i+2] = 'E';
                    given[i+3] = 'F';
                }
            }
        }
        for(i;i<given.size();i++){
            given[i] = 'A';
        }
        cout<<given<<endl;
    }
    
    return 0;
}
