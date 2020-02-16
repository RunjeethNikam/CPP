#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 10000000
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli vertices;
    cin>>vertices;
    int graph[vertices][vertices];
    for(lli i = 0;i<vertices;i++){
        for(lli j = 0;j<vertices;j++){
            string x;
            cin>>x;
            if(x == "INF"){
                graph[i][j] = INF;
            }
            else{
                graph[i][j] = stoi(x);
            }

            // cin>>graph[i][j];
        }
    }
    int temp[vertices][vertices];
    for (lli i = 0; i < vertices; i++)
    {
        for (lli j = 0; j < vertices; j++)
        {
            temp[i][j] = graph[i][j];
        }
    }
    for(lli i = 0;i<vertices;i++){
        for(lli j = 0;j<vertices;j++){
            for(lli k = 0;k<vertices;k++){
                if(temp[j][i] + temp[i][k] < temp[j][k]){
                    temp[j][k] = temp[j][i] + temp[i][k];
                }
            }
        }
    }
    for(lli i = 0;i<vertices;i++){
        for(lli j = 0;j<vertices;j++){
            if(temp[i][j] == INF){
                cout<<"INF"<<" ";
            }
            else{
                cout<<temp[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
