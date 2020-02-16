#include<bits/stdc++.h>
using namespace std;
int lis(vector<int> &v){

    if(v.size()){
        vector<int> tail(v.size(), 0);
        int length = 1;
        tail[0] = v[0];
        for(int i = 1;i<v.size();i++){
            if(v[i] > tail[length-1]){
                tail[length++] = v[i];
            }
            else{
                auto it = find(tail.begin(), tail.begin()+ length, v[i]);
                if(it != tail.begin() + length){
                    continue;
                }
                it = upper_bound(tail.begin(), tail.begin() + length, v[i]);
                *it = v[i];
            }
        }
        return length;
    }
    else{
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    vector<int> v{2, 5, 7, 11, 8, 10, 13, 6};
    cout<<lis(v);
    return 0;
}
