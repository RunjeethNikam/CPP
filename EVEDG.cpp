#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    lli t;
    cin>>t;
    while(t--){
        lli no_vertices, edges;
        cin>>no_vertices>>edges;
        vector<set<lli>> graph(no_vertices);
        lli k = 1;
        vector<lli> vertice(no_vertices,k);
        set<lli> st;
        for(lli i = 0;i<no_vertices;i++){
            st.insert(i);
        }
        for(lli i= 1;i<=edges;i++){
            lli u, v;
            cin>>u>>v;
            u--, v--;
            graph[u].insert(v);
            graph[v].insert(u);
        }
        while(edges&1){
            bool flag = true;
            set<lli>::iterator i;
            for(auto it = st.begin();it!= st.end();it++){
                if(graph[*it].size()&1){
                    i = it;
                    flag = false;
                    for(auto itt = graph[*i].begin();itt!=graph[*i].end();itt++){
                        lli index = *(itt);
                        graph[index].erase(*i);
                    }
                    edges -= graph[*it].size();
                    graph[*i].clear();
                    break;
                }
            }
            if(flag){
                // i  = st.begin();
                
                for(auto it = st.begin();it!=st.end();it++){
                    if(graph[*it].size()%2 == 0 and graph[*it].size() != 0){
                        i = it;
                        break;
                    }
                }
                edges -= graph[*i].size();
                for(auto itt = graph[*i].begin();itt!=graph[*i].end();itt++){
                    lli index = *(itt);
                    graph[index].erase(*i);
                }
                graph[*i].clear();
            }
            vertice[*i] = k;
            st.erase(i);
            k++;
        }
        for(auto i = st.begin();i!=st.end();i++){
            vertice[*i] = k;
        }
        cout<<k<<endl;
        for(auto i : vertice){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
