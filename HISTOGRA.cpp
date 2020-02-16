#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli get(vector<lli> hist, lli n)
{
    stack<lli> st;
    lli max_area = -1;
    lli tp;
    lli area_with_top;
    lli i = 0;
    while (i < n)
    {
        if (st.empty() || hist[st.top()] <= hist[i])
        {
            st.push(i++);
        }
        else
        {
            tp = st.top();
            st.pop();
            area_with_top = hist[tp] * (st.empty() ? i : i - st.top() - 1);
            max_area = max(max_area, area_with_top);
        }
    }
    while (!st.empty())
    {
        tp = st.top();
        st.pop();
        area_with_top = hist[tp] * (st.empty() ? i : i - st.top() - 1);
        max_area = max(max_area, area_with_top);
    }
    return max_area;
}
int main(int argc, char const *argv[])
{
    while (1)
    {
        lli n;
        cin >> n;
        if (n == 0)
            break;
        vector<lli> given(n);
        for (lli i = 0; i < n; i++)
        {
            cin >> given[i];
        }
        cout << get(given, given.size()) << endl;
    }
    return 0;
}
