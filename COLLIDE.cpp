#include<bits/stdc++.h>
using namespace std;
#define lli long long int
float solve(lli XE, lli YE, string dirE, lli X, lli Y, string dir){
    if(dirE == "U"){
        if(dir == "D"){
            float t = (Y - YE)/2.0;
            if(t >= 0 and XE == X){
                return t;
            }
        }
        else if(dir == "R"){
            float t1 = (Y- YE);
            float t2 = XE - X;
            if(t1 == t2 and t1 >= 0){
                return t1;
            }
        }
        else if(dir == "L"){
            float t1 = (Y- YE);
            float t2 = X - XE;
            if(t1 == t2 and t1 >= 0){
                return t1;
            }
        }
    }
    else if(dirE == "D"){
        if(dir == "U"){
            float t = (YE-Y)/2.0;
            if(t >= 0 and XE == X){
                return t;
            }
        }
        else if(dir == "R"){
            float t1 = YE-Y;
            float t2 = XE - X;
            if(t1 == t2 and t1>=0){
                return t1;
            }
        }
        else if(dir == "L"){
            float t1 = YE-Y;
            float t2 = X-XE ;
            if(t1 == t2 and t1>=0){
                return t1;
            }
        }
    }
    else if(dirE == "R"){
        if(dir == "U"){
            float t1 = YE - Y;
            float t2 = X - XE;
            if(t1 == t2 and t1 >= 0)
            return t1;   
        }
        else if(dir == "D"){
            float t1 = Y - YE;
            float t2 = X - XE;
            if(t1 == t2 and t1 >= 0)
            return t1;   
        }
        else if(dir == "L"){
            float t = (X - XE)/2.0;
            if(YE == Y and t >=0){
                return t;
            }
        }
    }
    else{
        if(dir == "U"){
            float t1 = YE - Y;
            float t2 = XE - X;
            if(t1 == t2 and t1 >= 0)
            return t1;
        }
        else if(dir == "D"){
            float t1 = Y - YE;
            float t2 = XE - X;
            if(t1 == t2 and t1 >= 0)
            return t1;
        }
        else if(dir == "R"){
            float t = (XE - X)/2.0;
            if(t >= 0 and YE == Y){
                return t;
            }
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli XE, YE;
        string dirE;
        cin>>XE>>YE>>dirE;
        float time = 999999;
        lli n;
        cin>>n;
        while(n--){
            lli X, Y;
            string dir;
            cin>>X>>Y>>dir;
            float timex = solve(XE, YE, dirE, X, Y, dir);
            if(timex == -1)
            continue;
            else
            {
                time = min(timex, time);
            }
        }
        if(time == 999999){
            // cout<<"SAFE";
            printf("SAFE\n");
        }
        else{
            printf("%.1f\n", time);
        }
        // cout<<endl;
    }
    return 0;
}
