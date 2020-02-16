#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli dp[1010][1010];
lli lps(string given,lli low, lli high){
    if(low <= high){
        if(low == high){
            return 1;
        }
        if(given[low] == given[high] and high == (low + 1)){
            return 2;
        }
        else{
            if(dp[low][high] != -1){
                return dp[low][high];
            }
            . 
            else{
                if(given[low] == given[high]){
                    dp[low][high] = 2+lps(given, low +1,high-1);
                    return dp[low][high];
                }
                else{
                    dp[low][high] = max(lps(given, low + 1, high), lps(given, low, high-1));
                    return dp[low][high];
                }
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        string given;
        cin>>given;
        cout<<lps(given, 0, given.size()-1)<<endl;
    }
    return 0;
}
// // A Dynamic Programming based C++ program for LPS problem 
// // Returns the length of the longest palindromic subsequence in seq 
// #include<bits/stdc++.h> 
// using namespace std;
// // A utility function to get max of two integers 
// // int max (int x, int y) { return (x > y)? x : y; } 

// // Returns the length of the longest palindromic subsequence in seq 
// int lps(string str) 
// { 
// int n = str.size(); 
// int i, j, cl; 
// int L[n][n]; // Create a table to store results of subproblems 


// // Strings of length 1 are palindrome of lentgh 1 
// for (i = 0; i < n; i++) 
// 	L[i][i] = 1; 

// 	// Build the table. Note that the lower diagonal values of table are 
// 	// useless and not filled in the process. The values are filled in a 
// 	// manner similar to Matrix Chain Multiplication DP solution (See 
// 	// https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/). cl is length of 
// 	// substring 
// 	for (cl=2; cl<=n; cl++) 
// 	{ 
// 		for (i=0; i<n-cl+1; i++) 
// 		{ 
// 			j = i+cl-1; 
// 			if (str[i] == str[j] && cl == 2) 
// 			L[i][j] = 2; 
// 			else if (str[i] == str[j]) 
// 			L[i][j] = L[i+1][j-1] + 2; 
// 			else
// 			L[i][j] = max(L[i][j-1], L[i+1][j]); 
// 		} 
// 	} 

// 	return L[0][n-1]; 
// } 

// /* Driver program to test above functions */
// int main() 
// { 
    
//     freopen("/mnt/d/cpp/inputf.in", "r", stdin);
//     freopen("/mnt/d/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);    
//     int t;
//     cin>>t;
//     while(t--){
//         string given;
//         cin>>given;
//         cout<<(given.size() -lps(given))<<endl;
//     }
// 	return 0; 
// } 
