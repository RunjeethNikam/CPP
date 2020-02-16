#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli size;
        // cout << "enter the size";
        cin >> size;
        vector<lli> given(size);
        for (auto i = 0; i < size; i++)
        {
            cin >> given[i];
        }
        lli max_so_far = INT_MIN;
        lli max_ending_here = 0;
        for (auto i = 0; i < size; i++)
        {
            max_ending_here = max_ending_here + given[i];
            if (max_ending_here > max_so_far)
                max_so_far = max_ending_here;
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        cout << max_so_far << endl;
    }
    return 0;
}
