#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    vector<lli> ugly(1e4 + 5);
    ugly[0] = 1;
    lli pollier_2 = 0, pollier_3 = 0, pollier_5 = 0;
    lli next_multiple_2 = ugly[pollier_2] * 2, next_multiple_3 = ugly[pollier_3] * 3;
    lli next_multiple_5 = ugly[pollier_5] * 5;
    for(lli i = 1;i<ugly.size();i++){
        lli uglynumber = min({next_multiple_2, next_multiple_3, next_multiple_5});
        ugly[i] = uglynumber;
        if(uglynumber == next_multiple_2){
            pollier_2 += 1;
            next_multiple_2 = ugly[pollier_2]*2;
        }
        if(uglynumber == next_multiple_3){
            pollier_3 += 1;
            next_multiple_3 = ugly[pollier_3]*3;
        }
        if(uglynumber == next_multiple_5){
            pollier_5 += 1;
            next_multiple_5 = ugly[pollier_5]*5;
        }
    }
    lli t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        cout<<ugly[n-1]<<endl;
    }

    return 0;
}
