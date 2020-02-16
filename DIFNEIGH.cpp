#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    lli t;
    cin >> t;
    while (t--)
    {
        lli n, m;
        cin >> n >> m;
        bool flag = true
        if(n > m){
            // swap(n, m);
            int temp  = n;
            n = m;
            m = temp;

        }
        int result[n][m], k;
        int a1[] = {1, 1, 2, 2};
        int a2[] = {4, 3, 3, 4};
        int a3[] = {2, 2, 1, 1};
        int a4[] = {3, 4, 4, 3};
        if (n >= 3 and m >= 3)
        {
            k = 4;
            for (int i = 0; i < n; i += 4)
            {
                for (int j = 0; j < m; j++)
                {
                    if(i<n)
                    result[i][j] = a1[j % 4];
                }
                for (int j = 0; j < m; j++)
                {
                    if((i+1)<n)
                    result[i + 1][j] = a2[j % 4];
                }
                for (int j = 0; j < m; j++)
                {
                    if((i+2)<n)
                    result[i + 2][j] = a3[j % 4];
                }
                for (int j = 0; j < m; j++)
                {
                    if((i+3)<n)
                    result[i + 3][j] = a4[j % 4];
                }
            }
        }
        else
        {
            if (n == 1)
            {
                if (m == 1)
                    k = 1, result[0][0] = 1;
                else if (m >= 2){
                    k = -1;
                    for(int i = 0;i<m;i++){
                        result[0][i] = a1[i%4];
                        k = max(result[0][i], k);
                    }
                }
            }
            else if (n == 2)
            {
                k = 1;
                int arr[] = {1,2,3};
                for(int i = 0;i<m;i++){
                    result[0][i] = arr[i%3];
                    result[1][i] = arr[i%3];
                    k = max({k, result[0][i], result[1][i]});
                }
            }
            else
            {
                if(m == 1)
                    k = 2, result[0][0] = 1, result[1][0] = 1, result[2][0] = 2;
                if(m == 2)
                    k = 3, result[0][0] = 1, result[0][1] = 1, result[1][0] = 2, result[1][1] = 2, result[2][0] = 3, result[2][1] = 3;
            }
        }
        cout<<k<<endl;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
