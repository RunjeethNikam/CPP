#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli N, Q;
    cin >> N>>Q;
    vector<lli> A(N + 1, 0);
    vector<lli> A1(N + 1, 0);
    vector<lli> A2(N + 1, 0);
    vector<lli> B(N + 1, 0);
    vector<lli> B1(N + 1, 0);
    vector<lli> B2(N + 1, 0);
    for (lli i = 1; i <= N; i++)
    {
        cin>>A[i];
        if(i&1){
            A1[i] = A[i];
        }
        else{
            A2[i] = A[i];
        }
        A1[i] = A1[i] + A1[i-1];
        A2[i] = A2[i] + A2[i-1];
    }
    for (lli i = 1; i <= N; i++)
    {
        cin>>B[i];
        if(i&1){
            B1[i] = B[i];
        }
        else{
            B2[i] = B[i];
        }
        B1[i] = B1[i] + B1[i-1];
        B2[i] = B2[i] + B2[i-1];
    }
    while(Q--){
        lli choise;
        cin>>choise;
        lli sum = 0;
        if(choise == 1){
            lli L, R;
            cin>>L>>R;
            // lli sum = 0;
            if(L&1){
                // odd
                sum += (A1[R] - A1[L-1]);
                // L++, R--;
                lli x = (B2[R] - B2[L-1]) ;
                sum += x;
            }
            else{
                sum += (A2[R] - A2[L-1]);
                // L++, R--;
                sum += (B1[R] - B1[L-1]);
            }
        }
        else{
            lli L, R;
            cin>>L>>R;
            // lli sum = 0;
            if(L&1){
                // odd
                sum += (B1[R] - B1[L-1]);
                // L++, R--;
                sum += (A2[R] - A2[L-1]);
            }
            else{
                sum += (B2[R] - B2[L-1]);
                // L++, R--;
                sum += (A1[R] - A1[L-1]);
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
