#include <bits/stdc++.h>
using namespace std;
template <typename T>
void operator<<(ostream& cout, const vector<T>& v){
    cout<<"[";
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<"]"<<endl;
    // return cout;
}
int main(int argc, char const *argv[])
{
    int n, bit;
    cin >> n >> bit;
    vector<int> given(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> given[i];
    }
    int even = 0, odd = 0;
    vector<int> hi;
    for (int i = 1; i < n; i++)
    {
        if (given[i] & 1)
            odd++;
        else
            even++;
        if(odd == even){
            hi.push_back(abs(given[i] - given[i+1]));
        }
    }
    
    sort(hi.begin(), hi.end());
    int count = 0;
    for(int i = 0;i<hi.size();i++){
        bit -= hi[i];
        if(bit >= 0)
        count++;
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
