#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int size1, size2, x;
        cin >> size1 >> size2 >> x;
        vector<int> stack1(size1), stack2(size2);
        for (int i = 0; i < size1; i++)
        {
            cin >> stack1[i];
        }
        for (int i = 0; i < size2; i++)
        {
            cin >> stack2[i];
        }

        int sum = 0;
        int i = 0, j = 0;
        int count = 0;
        while (i < stack1.size() and j < stack2.size())
        {
            // cout<<stack1[i]<<" "<<stack2[j]<<endl;
            int mn = min(stack1[i], stack2[j]);
            sum += mn;
            if (mn == stack1[i])
            {
                i++;
            }
            else
            {
                j++;
            }
            if(sum>x){
                break;
            }
            count++;
        }
        cout<< count<<endl;
    }
    return 0;
}
