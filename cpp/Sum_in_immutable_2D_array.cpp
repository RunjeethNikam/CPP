#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cin>>n>>m;
    // int arr[n+1][m+1] = {0};
    vector<vector<int>> arr(n+1, vector<int> (m+1, 0));
    // int ar[n+2][m+2] = {0};
    vector<vector<int>> ar(n+2, vector<int> (m+2, 0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++)
        cin>>arr[i][j];
    }
    for(int i = 1;i<= n;i++){
        for(int j= 1;j<= m;j++){
            ar[i][j] = ar[i-1][j] + ar[i][j-1] - ar[i-1][j-1];
            ar[i][j] += arr[i][j];
        }
    }
    for(int i = 1;i<= n;i++){
        for(int j= 1;j<= m;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<(ar[3][3] - ar[2-1][3] - ar[3][2-1] + ar[2-1][2-1]);
    return 0;
}
