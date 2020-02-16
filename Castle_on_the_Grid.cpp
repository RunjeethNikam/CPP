#include<bits/stdc++.h>
#define lli long long int
using namespace std;
void valid(vector<vector<int>> grid,queue<pair<pair<int, int>, int>> &q , int x, int y, int step){
    // int dx = -1, dy = -1;
    for(int cy = y+1;cy<grid.size() && grid[x][cy];cy++)
        q.push({{x, cy}, step+1});
        // dy=cy;
    // if(dy != -1)
    // q.push({{x, dy}, step+1});


    // dx = -1, dy = -1;
    for(int cy = y-1;cy>=0 && grid[x][cy];cy--)
    q.push({{x, cy}, step+1});
    // dy=cy;
    // if(dy!= -1)
    // q.push({{x, dy}, step+1});


    // dx = -1, dy = -1;
    for(int cx = x+1;cx<grid.size() && grid[cx][y];cx++)
    q.push({{cx, y}, step+1});
    // dx=cx;
    // if(dx != -1)
    // q.push({{dx, y}, step+1});
    
    
    // dx = -1, dy = -1;
    for(int cx = x-1;cx>=0 && grid[cx][y];cx--)
    q.push({{cx, y}, step+1});
    // dx=cx;
    // if(dx!=-1)
    // q.push({{dx, y}, step+1});


}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<vector<int>> grid(n, vector<int> (n, 1));
    for(auto &i : grid){
        for(auto &j : i){
            char x;
            cin>>x;
            if(x == 'X'){
                j = 0;
            }
        }
    }


    int sX, sY, gX, gY;
    cin>>sX>>sY>>gX>>gY;

    queue<pair<pair<int, int>, int>> q;
    q.push({{sX, sY}, 0});
    int dx[] = {1, 0, 0, -1};
    int dy[] = {0, -1, 1, 0};
    while(q.size()){
        auto temp = q.front();q.pop();
        grid[temp.first.first][temp.first.second] = 0;
        if((temp.first.first == gX) and (temp.first.second == gY)){
            cout<<temp.second<<endl;
            break;
        }
        valid(grid, q, temp.first.first, temp.first.second, temp.second);
    }
    return 0;
}
