#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    map<lli, lli> young, old;
    lli sm_y = 0, sm_o = 0;
    lli n;
    cin>>n;
    while(n--){
        lli age, rank;
        cin>>age>>rank;
        if(age < old.begin()->first){
            young[age]= rank;
            sm_y += rank;
        }
        else{
            old[age] = rank;
            sm_o += rank;
        }
        if(old.size() > young.size()){
            lli age = old.begin()->first, rank = old.begin()->second;
            old.erase(age);
            sm_o -= rank;
            sm_y += rank;
            young[age] = rank;
        }
        else if (abs(int(old.size() - young.size())) > 1)
        {
            auto it = young.end();
            --it;
            lli age = it->first, rank = it->second;
            young.erase(it);
            sm_y -= rank;
            sm_o += rank;
            old[age] = rank;
        }
        cout<<abs(int(sm_y- sm_o))<<endl;
    }
    return 0;
}
