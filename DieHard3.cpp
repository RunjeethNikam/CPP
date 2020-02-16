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
    lli t;
    cin>>t;
    while(t--){
        lli a, b, c;
        cin>>a>>b>>c;
        set<lli> st;
        set<pair<lli, lli>>  old;
        queue<pair<lli, lli>> q;
        q.push({0, 0});
        bool flag = true;
        while(!q.empty()){
            pair<lli,lli> node = q.front();q.pop();
            old.insert(node);
            st.insert(node.first);
            st.insert(node.second);

            if(old.find({node.first, 0}) == old.end()){
                q.push({node.first, 0});
            }
            if(old.find({0, node.second}) == old.end()){
                q.push({0, node.second});
            }
            if (old.find({node.first, b}) == old.end())
            {
                q.push({node.first, b});
            }
            if (old.find({a, node.second}) == old.end())
            {
                q.push({a, node.second});
            }
            {
                pair<lli, lli> node1 = node;
                lli remaining = b- node1.second;
                if(remaining){
                    node1.second += min(remaining, node1.first);
                    node1.first -= min(remaining, node1.first);
                }
                if (old.find(node1) == old.end())
                {
                    q.push(node1);
                }
            }

            {
                auto node1 = node;
                lli remaining = a - node1.first;
                if (remaining)
                {
                    node1.first += min(remaining, node1.second);
                    node1.second -= min(remaining, node1.second);
                }
                if (old.find(node1) == old.end())
                {
                    q.push(node1);
                }
            }

            if(st.find(c) != st.end()){

                flag = false;
                break;
            }
        }
        cout<<((flag)?"NO":"YES")<<endl;
    }
    return 0;
}
