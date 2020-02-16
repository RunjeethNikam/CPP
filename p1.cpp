// #include <bits/stdc++.h>
// using namespace std;
// int nodes;
// map<char, int> solve(vector<bool> &visited, vector<vector<int>> &tree, vector<map<char, int>> &fruit, int index)
// {
//     // visited[index] = true;
//     if(visited[index]){
//         visited[index] = false;
//         for (auto i : tree[index])
//         {
//             map<char, int> hi = solve(visited, tree, fruit, i);
//             for (auto it = hi.begin(); it != hi.end(); it++)
//             {
//                 fruit[index][it->first] += it->second;
//             }
//         }
//         return fruit[index];
//     }
//     map<char, int> mp;
//     return mp;
// }
// int main(int argc, char const *argv[])
// {

//     freopen("/home/home/cpp/inputf.in", "r", stdin);
//     freopen("/home/home/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);
//     cin >> nodes;
//     vector<vector<int>> tree(nodes);
//     vector<bool> visited(nodes, true);
//     vector<map<char, int>> fruit(nodes);
//     for (int i = 0; i < nodes; i++)
//     {
//         char c;
//         cin >> c;
//         fruit[i][c]++;
//     }

//     for (int i = 0; i < nodes-1; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         a--, b--;
//         tree[a].push_back(b);
//         tree[b].push_back(a);
//     }
//     fruit[0] = solve(visited, tree, fruit, 0);
//     // for (auto i : fruit)
//     // {
//     //     for (auto it = i.begin(); it != i.end(); it++)
//     //     {
//     //         cout << it->first << " " << it->second;
//     //         cout << endl;
//     //     }
//     //     cout << endl;
//     // }
//     for(int i = 0;i<nodes;i++){
//         char a;
//         cin>>a;
//         cout<<fruit[i][a]<<" ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int nodes;
map<char, int> solve(vector<bool> &visited, vector<vector<int>> &tree, vector<map<char, int>> &fruit, int index)
{
    visited[index] = true;
    for (auto i : tree[index])
    {
        map<char, int> hi = solve(visited, tree, fruit, i);
        for (auto it = hi.begin(); it != hi.end(); it++)
        {
            fruit[i][it->first] += hi[it->first];
        }
    }
    return fruit[index];
}
int main(int argc, char const *argv[])
{
    cin >> nodes;
    vector<vector<int>> tree(nodes);
    vector<bool> visited(nodes);
    vector<map<char, int>> fruit(nodes);
    for (int i = 0; i < nodes; i++)
    {
        char c;
        cin >> c;
        fruit[i][c]++;
    }

    for (int i = 0; i < nodes; i++)
    {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    fruit[0] = solve(visited, tree, fruit, 0);
    for (auto i : fruit)
    {
        for (auto it = i.begin(); it != i.end(); it++)
        {
            cout << it->first << " " << it->second;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}