#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void solve(vector<vector<lli>> mat){
    auto temp = mat;
    for(lli i = 1;i<mat.size();i++){
        for(lli j = 0;j<3;j++){
            lli first, second;
            if(j == 0){
                first = temp[i-1][j+1];
                second = temp[i-1][j+2];
            }
            else if(j == 1){
                first = temp[i-1][j-1];
                second = temp[i-1][j+1];
            }
            else if(j == 2){
                first = temp[i-1][j-1];
                second = temp[i-1][j-2];
            }
            temp[i][j] = mat[i][j] + min(first, second);
        }
    }
    cout<<*min_element(temp.back().begin(), temp.back().end());
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    vector<vector<lli>> mat;
    lli row, col;
    cin>>row>>col;
    for(lli i = 0;i<row;i++){
        vector<lli> temp(col); 
        for(lli j = 0;j<col;j++){
            cin>>temp[j];
        }
        mat.push_back(temp);
        temp.p
    }
    solve(mat);
    return 0;
}
