#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    vector<int> given(size);
    for(int i = 0;i<size;i++){
        cin>>given[i];
    }
    int count = 0;
    int cnt = 1;
    for(int i = 1;i<size;i++){
        if(given[i] <= 2*given[i-1]){
            cnt++;
        }
        else{
            count = max(count, cnt);
            cnt = 1;
        }
    }
    count = max(count, cnt);
    cout<<count<<endl;
    return 0;
}
