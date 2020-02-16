#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    string given;
    cin>>given;
    string temp = given;
    reverse(temp.begin(), temp.end());
    given = given + "$" + temp;
    vector<int> lps(given.size());
    lps[0] = 0;
    int len = 0;
    int i = 1;
    while(i < given.size()){
        if(given[i] == given[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
    cout << (temp.size() - lps.back()) << endl;
    ;
    return 0;
}
