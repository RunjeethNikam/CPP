#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli ROW, COL;
struct queueNode{
    pair<lli, lli> node;
    lli dist;
};
bool isValid(lli row, lli col){
    return (row >=0) and (row < ROW) and (col >=0) and (col < COL);
}
vector<lli> rowNum{-1, 0, 0, 1};
vector<lli> colNum{0, -1, 1, 0};
lli DFS(vector<vector<lli>> mat, pair<lli, lli> source, pair<lli, lli> dest){
    if(!mat[source.first][source.second] || !mat[dest.first][dest.second])
        return -1;
    vector<vector<bool>> visited(ROW, vector<bool> (COL, false));
    visited[source.first][source.second] = true;
    queue<queueNode> q;
    queueNode s = {source, 0};
    q.push(s);
    while(!q.empty()){
        queueNode curr = q.front();
        pair<lli, lli> pt = curr.node;
        if(pt.first == dest.first and pt.second == dest.second){
            return curr.dist;
        }
        q.pop();
        for(lli i = 0;i<4;i++){
            int row = pt.first + rowNum[i];
            int col = pt.second + colNum[i];
            if(isValid(row, col) and mat[row][col] and !visited[row][col]){
                visited[row][col] = true;
                queueNode Adjcell = {{row, col},curr.dist+1};
                q.push(Adjcell);
            }
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    cin>>ROW>>COL;
    vector<vector<lli>> mat{ 
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 }, 
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 }, 
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 }, 
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 }, 
        { 1, 1, 1, 0, 1, 1, 1, 0, 1, 0 }, 
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 }, 
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, 
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 }, 
        { 1, 1, 0, 0, 0, 0, 1, 0, 0, 1 } 
    };
    // int mat[ROW][COL];
    // for(lli i = 0;i<ROW;i++){
    //     for(lli j = 0;j<COL;j++){
    //         cin>>mat[i][j];
    //     }
    // }
    pair<lli, lli> source, dest;
    cin>>source.first>>source.second;
    cin>>dest.first>>dest.second;
    lli dist = DFS(mat, source, dest);
    if(dist == -1){
        cout<<"not found"<<endl;
    }
    cout<<"found"<<endl;
    return 0;
}
