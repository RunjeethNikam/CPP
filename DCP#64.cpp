#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int rows, cols;
        cin>>rows>>cols;
        int grid[rows][cols];
        for(int i= 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                cin>>grid[i][j];
            }
        }
        // for(int i= 0;i<rows;i++){
        //     for(int j = 0;j<cols;j++){
        //         cout<<grid[i][j];
        //     }
        //     cout<<endl;
        // }
        int top_left = 0, left_top = 0, top_right = cols-1, left_bottom = rows-1;
        while(top_left <= top_right && left_top <= left_bottom){
            for(int i = top_left;i<= top_right;i++){
                cout<<grid[left_top][i]<<" ";
            }
            left_top++;
            if(top_left <= top_right && left_top <= left_bottom)
            for(int i = left_top;i<= left_bottom;i++){
                cout<<grid[i][top_right]<<" ";
            }
            top_right--;
            if(top_left <= top_right && left_top <= left_bottom)
            for(int i = top_right;i >= top_left;i--){
                cout<<grid[left_bottom][i]<<" ";
            }
            left_bottom--;
            if(top_left <= top_right && left_top <= left_bottom)
            for(int i = left_bottom;i >= left_top;i--){
                cout<<grid[i][top_left]<<" ";
            }
            top_left++;
        }
        cout<<"\n";
    }
    return 0;
}
