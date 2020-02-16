#include<bits/stdc++.h>
using namespace std;
bool com(pair<int, char> a, pair<int, char> b){
    if(a.first < b.first)
    return true;
    else if(a.first == b.first)
    return true;
    return false;
}
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    vector<int> g1(size);
    vector<int> g2(size);
    for (int i = 0; i < size; i++)
    {
        cin>>g1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin>>g2[i];
    }
    int k;
    cin>>k;
    vector<pair<int, char>> points;
    for(auto i =0;i<size;i++){
        points.push_back(make_pair(g1[i], 'S'));
    }
    for(auto i =0;i<size;i++){
        points.push_back(make_pair(g2[i], 'E'));
    }
    sort(points.begin(), points.end(), com);
    for (int i = 0; i < points.size(); i++)
    {
        cout<<points[i].first<<" "<<points[i].second<<endl;
    }
    int count = 0;
    for(auto i = 0;i<points.size();i++){
        if(points[i].second == 'S')
            count++;
        else if(points[i].second == 'E')
            count--;
        if(count> k){
            cout<<"false";
            return 1;
        }
    }
    cout<<"true";
    return 0;
}
