#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    int t;
    cin>>t;
    while(t--){
            int N;
        cin >> N;
        vector<int> given(N);
        for (int i = 0; i < N; i++)
        {
            cin >> given[i];
        }
        vector<int> g1(N, 0), g2(N, 0);
        g1[0] = 1;
        g2.back() = 1;
        for (int i = 1; i < N; i++)
        {
            int mx = 1;
            for (int j = 0; j < i; j++)
            {
                if (given[j] < given[i])
                {
                    mx = max(mx, g1[j] + 1);
                }
            }
            g1[i] = mx;
        }
        for (int i = N - 1; i >= 0; i--)
        {
            int mx = 1;
            for (int j = i + 1; j < N; j++)
            {
                if (given[i] > given[j])
                {
                    mx = max(mx, g2[j] + 1);
                }
            }
            g2[i] = mx;
        }
        int mx = -1;
        for(int i = 0;i<N;i++){
            mx = max(g1[i] + g2[i] -1, mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
