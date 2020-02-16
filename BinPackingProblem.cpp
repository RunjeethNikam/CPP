#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli nextFit(lli wt[], lli size, lli capacity)
{
    lli result = 0;
    lli remaining = capacity;
    for (lli i = 0; i < size; i++)
    {
        if (wt[i] <= remaining)
        {
            remaining -= wt[i];
        }
        else
        {
            result++;
            remaining = capacity - wt[i];
        }
    }
    return result;
}
lli firstFit(lli wt[], lli size, lli capacity)
{
    lli result = 0;
    lli remaining[size];
    for (lli i = 0; i < size; i++)
    {
        int j = 0;
        for (; j < result; j++)
        {
            if (remaining[j] >= wt[i])
            {
                remaining[j] -= wt[i];
                break;
            }
        }
        if (j == result)
        {
            remaining[result++] = capacity - wt[i];
        }
    }
    return result;
}

lli bestFit(lli wt[], lli size, lli capacity)
{
    lli result = 0;
    lli remaining[size];
    for(lli i = 0;i<size;i++){
        lli j = 0;
        lli minwt =  capacity+1;
        lli index = 0;
        for(;j<result;j++){
            if(remaining[j] >= wt[i] and remaining[j]- wt[i] < minwt){
                index = j;
                minwt = remaining[j] - wt[i];
            }
        }
        if(minwt == capacity+1){
            remaining[result++] = capacity - wt[i];
        }
        else{
            remaining[index] -= wt[i]; 
            
        }
    }
    return result;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    lli wt[] = {2, 5, 4, 7, 1, 3, 8};
    lli capacity = 10;
    lli size = 7;
    cout << bestFit(wt, size, capacity);
    return 0;
}
