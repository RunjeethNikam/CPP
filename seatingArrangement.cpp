#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    
    int N, M, K;
    cin>>N>>M>>K;
    // vector<int> rows(M, 0);
    map<int, int> rows;
    for(int i = 1;i<=M;i++){
        rows[i] = 0;
    }
    // vector<bool> rowbool(M, true);
    int result = 0;
    for(int i= 0;i<N;i++){
        int row;
        cin>>row;
        // row--;
        if(rows.find(row) == rows.end()){
            result++;
            auto it = rows.upper_bound(row);
            if(rows.size() == 0){
                result++;
                continue;
            }
            if(it == rows.end()){
                it = rows.begin();
                it->second++;
                if(it->second == K){
                    rows.erase(it);
                }
            }
            else{
                it->second++;
                if(it->second == K){
                    rows.erase(it);
                }
            }
        }
        else{
            rows[row]++;
            if(rows[row]==K){
                rows.erase(row);
            }
        }
        cout<<rows.size()<<endl;
        // if(rowbool[row]){
        //     rows[row]++;
        //     if(rows[row] == K){
        //         rowbool[row] = false;
        //     }
        // }
        // else{
        //     int i= row+1;
        //     while(i != row && !rowbool[i]  ){
        //         i = i+1;
        //         i = i%M;
        //     }
        //     if(i != rows.size()){
        //         rows[i]++;
        //         if(rows[i] == K){
        //             rowbool[i] = false;
        //         }
        //     }
        //     result++;
        // }
    }
    cout<<result;
    return 0;
}