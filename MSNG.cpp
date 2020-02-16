#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define LIMIT 1000000000000
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    map<char, lli> con;
    con['0'] = 0ll,con['1'] = 1ll, con['2'] = 2ll, con['3'] = 3ll, con['4'] = 4ll, con['5'] = 5ll, con['6'] = 6ll, con['7'] = 7ll, con['8'] = 8ll, con['9'] = 9ll;
    for(int i = 0, j = 10;i<26;i++, j++){
        con['A' + i] = j*(1ll);
    }
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        map<lli, lli> mp;
        for(lli i = 0;i<n;i++){
            lli a;
            string b;
            cin>>a>>b;
            lli start = -1;
            for(lli it = 0;it < b.size();it++){
                start = max(start, con[b[it]]);
            }
            set<lli> st;
            if(a == -1){
                for(lli base = max(start+1, 2ll);base<=36;base++){
                    lli count = 0;
                    bool flag = true;
                    for(lli it = b.size()-1, j = 0; it >=0; it--, j++){
                        count += con[b[it]]*pow(base, j);
                        if(count > LIMIT or count < 0){
                            flag = false;
                            break;
                        }
                    }
                    if(flag){
                        st.insert(count);
                    }
                    // else{
                    //     st.insert(-1);
                    // }
                }
            }
            else{
                lli count = 0;
                bool flag = true;
                for(lli it = b.size()-1, j = 0; it >=0; it--,   j++){
                    count += con[b[it]]*pow(a, j);
                    if(count > LIMIT or count < 0){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    st.insert(count);
                }
                // else{
                //     st.insert(-1);
                // }
            }
            for(auto it= st.begin();it!=st.end();it++){
                mp[*it]++;
            }
        }
        set<lli> st;
        for(auto it = mp.begin();it!=mp.end();it++){
            if(it->second == n){
                st.insert(it->first);
            }
        }
        if(st.size() == 0){
            cout<<"-1";
        }
        else{
            if(st.size() == 1){
                cout<<*(st.begin());
            }   
            else{
                // if(*st.begin() == -1){
                //     cout<<(*(++st.begin()));
                // }
                // else{
                    cout<<(*st.begin());
                // }
            }
        }
        cout<<endl;
    }
    return 0;
}
