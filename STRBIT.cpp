#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int N, K;
        string given;
        cin>>N>>K;
        cin>>given;
        int count = 0;
        for(int i = 0;i<given.size();i++){
            if(given[i] == 'R'){
                for(int j =i;j<min(N, i+K);j++){    
                    given[j] = (given[j] == 'G')?'R':'G';
                }
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}
