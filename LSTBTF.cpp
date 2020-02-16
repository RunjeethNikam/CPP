#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool check(lli n){
    while(n){
        if(n%10 == 0){
            return false;
        }
        n /= 10;
    }
    return true;
}
bool check1(char n[]){
    lli result = 0;
    for(auto i = 0 : n){
        result += (i - '0')*(i-'0');
    } 
    if(!(sqrt(result) - floor(sqrt(result)))){
        return 1;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli size;
        cin>>size;
        // string lowerLimit = "1", upperLimit = "9" ;
        char lowerLimit[size], upperLimit[size];
        lowerLimit[0] = '1';
        upperLimit[0] = '9';
        for(lli i = 1;i< size;i++){
            lowerLimit[i] += '1';
            upperLimit[i] += '9';
        }
        while(1){
            lli carry = 1;
            lli i = size-1;
            if(check1(lowerLimit)){
                cout<<lowerLimit<<endl;
                break;
            }
            while(carry){
                if(lowerLimit[i] == '9'){
                    lowerLimit = '0';
                }
                else{
                    lli element = lowerLimit[i] - '0';
                    element++;
                    lowerLimit[i] = (int)(char)element;
                    carry = 0;
                }
                i--;
            }
            
            if(lowerLimit == upperLimit){
                cout<<"-1"<<endl;
                break;

            }
        } 
    }
    return 0;
}
