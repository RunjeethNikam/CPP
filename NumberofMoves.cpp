#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'minMoves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER startX
 *  3. INTEGER startY
 *  4. INTEGER endX
 *  5. INTEGER endY
 */

bool valid(int x, int y, int n){
    if(x < n and x >= 0){
        if(y < n and y >= 0){
            return true;
        }   
    }
    return false;
}

void nextMove(vector<vector<int>> &grid, int n, queue<pair<pair<int, int>, int>> &q, int x, int y, int step){
    if(valid(x + 1, y+2, n))
        if(grid[x+1][y+2])
            q.push({{x+1, y+2}, step+1});
    if(valid(x + 1, y-2, n))
        if(grid[x+1][y-2])
            q.push({{x+1, y-2}, step+1});
    if(valid(x - 1, y+2, n))
        if(grid[x-1][y+2])
            q.push({{x-1, y+2}, step+1});
    if(valid(x - 1, y-2, n))
        if(grid[x-1][y-2])
            q.push({{x-1, y-2}, step+1});


    if(valid(x + 2, y+1, n))
        if(grid[x+2][y+1])
            q.push({{x+2, y+1}, step+1});
    if(valid(x + 2, y-1, n))
        if(grid[x+2][y-1])
            q.push({{x+2, y-1}, step+1});
    if(valid(x - 2, y+1, n))
        if(grid[x-2][y+1])
            q.push({{x-2, y+1}, step+1});
    if(valid(x - 2, y-1, n))
        if(grid[x-2][y-1])
            q.push({{x-2, y-1}, step+1});
}

int minMoves(int n, int startX, int startY, int endX, int endY) {
    vector<vector<int>> grid(n, vector<int> (n, 1));
    grid[startX][startY] = 0;
    queue<pair<pair<int, int>, int>> q;
    q.push({{startX, startY}, 0});
    while(q.size()){
        auto temp = q.front();
        grid[temp.first.first][temp.first.second] = 0;
        q.pop();
        if((temp.first.first == endX) and (temp.first.second == endY)){
            return temp.second;
        }
        nextMove(grid, n, q, temp.first.first, temp.first.second, temp.second);
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string startX_temp;
    getline(cin, startX_temp);

    int startX = stoi(ltrim(rtrim(startX_temp)));

    string startY_temp;
    getline(cin, startY_temp);

    int startY = stoi(ltrim(rtrim(startY_temp)));

    string endX_temp;
    getline(cin, endX_temp);

    int endX = stoi(ltrim(rtrim(endX_temp)));

    string endY_temp;
    getline(cin, endY_temp);

    int endY = stoi(ltrim(rtrim(endY_temp)));

    int result = minMoves(n, startX, startY, endX, endY);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
