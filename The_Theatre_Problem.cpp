#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int solve(vector<ll> A, vector<ll> B, vector<ll> C,vector<ll> D);
int main(int argc, char const *argv[])
{
    ll testCases;
    cin>>testCases;
    ll finalfinalResult = 0;
    for(int t = 0;t<testCases;t++){
        ll size;
        cin>>size;
        vector<ll> A(4,0), B(4,0), C(4,0), D(4,0);
        for(ll a = 0;a<size;a++){
            char m; ll t;
            cin>>m>>t;
            if(m == 'A')
                A[(t/3)-1]++;
            else if(m == 'B')
                B[(t/3)-1]++;
            else if(m == 'C')
                C[(t/3)-1]++;
            else
                D[(t/3)-1]++;
        }
        finalfinalResult += solve(A, B, C, D);
    }
    cout<<finalfinalResult<<endl;
    return 0;
}


int solve(vector<ll> A, vector<ll> B, vector<ll> C,vector<ll> D){
    ll finalResult = INT_MIN;
    for(ll a = 0;a<4;a++){
    for(ll b = 0;b<4;b++){
    for(ll c = 0;c<4;c++){
    for(ll d = 0;d<4;d++){
        if((a!= b  and a!= c and a!= d) and (b!= c and b!= d) and (c!= d)){
            vector<ll> temp(4, 0);
            temp[0] = A[a];
            temp[1] = B[b];
            temp[2] = C[c];
            temp[3] = D[d];
            sort(temp.begin(), temp.end());
            // ll res = temp[3]*100 + temp[2]*75 + temp[1]*50 + temp[0]*25;   
            ll res = 0;
            int hi = 100;
            for(ll m = 0;m<4;m++){
                // if(temp[m] == 0){
                //     res -= 100;
                // }
                res += temp[m] * hi;
                hi -= 25;
            }
            for(ll m = 0;m<4;m++){
                if(temp[m] == 0){
                    res -= 100;
                }
            }
            finalResult = max(res, finalResult);
        }
    }
    }
    }
    }
    cout<<finalResult<<endl;
    return finalResult;
}