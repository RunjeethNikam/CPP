#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/ugly-numbers/0
// naive solution O(N)
// int maxDivide(int a, int b){
//     while(a%b == 0){
//         a = a/b;
//     }
//     return a;
// }
// int Ugly(int no){
//     no = maxDivide(no, 2);
//     no = maxDivide(no, 3);
//     no = maxDivide(no, 5);
//     return (no == 1)?1 : 0;
// }
// int getNthUglyNo(int no)
// {
//     int i = 1;
//     int count = 1;
//     while (no > count)
//     {
//         i++;
//         if (Ugly(i))
//             count++;
//     }
//     return i;
// }
// int main(int argc, char const *argv[])
// {
//     int test;
//     cin>>test;
//     while(test--){
//         int N;
//         cin>>N;
//         int no = getNthUglyNo(N);
//         cout << no << endl;
//     }
//     return 0;
// }

// DP approse
int getNthUglyNo(int n){
    vector<int> ugly(n);
    int i2 = 0, i3 = 0, i5 = 0;
    int next_multiple_of_2 = 2;
    int next_multiple_of_3 = 3;
    int next_multiple_of_5 = 5;
    int next_ugly_no = 1;
    ugly[0] = 1;
    for(int i = 1;i<n;i++){
        next_ugly_no = min({next_multiple_of_2, next_multiple_of_3, next_multiple_of_5});
        ugly[i] = next_ugly_no;
        if(next_multiple_of_2 == next_ugly_no){
            i2 += 1;
            next_multiple_of_2 = ugly[i2]*2;
        }
        if(next_multiple_of_3 == next_ugly_no){
            i3 += 1;
            next_multiple_of_3 = ugly[i3]*3;
        }
        if(next_multiple_of_5 == next_ugly_no){
            i5 += 1;
            next_multiple_of_5 = ugly[i5]*5;
        }
    }
    return next_ugly_no;
}
int main(int argc, char const *argv[])
{
    // int test;
    // cin>>test;
    // while(test--){
    int n;
    cin>>n;
    cout<<getNthUglyNo(n)<<endl;
    // }
    return 0;
}
