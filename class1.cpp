// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int
// int GCD(int a, int b, int &x, int &y){
//     if(a == 0){
//         x = 0;
//         y = 1;
//         return b;
//     }
//     int x1, y1;
//     int ans = GCD(b%)
// }
// int main(int argc, char const *argv[])
// {
//     freopen("/home/home/cpp/inputf.in", "r", stdin);
//     freopen("/home/home/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);    
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int
// lli lpf(lli n){
//     int result;
//     while (n%2 == 0)
//     {
//         n = n/2;
//         result = 2;
//     }
//     for(int i =3 ;i<= sqrt(n);i+= 2){
//         while(n%i == 0){
//             n = n/i;
//             result = i;
//         }
//     }
//     if(n >2){
//         result = n;
//     }
//     return result;
// }
// int main(int argc, char const *argv[])
// {
//     freopen("/home/home/cpp/inputf.in", "r", stdin);
//     freopen("/home/home/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0); 
//     lli count = 0;
//     lli i = 1;
//     while(1){
//         if(count == 10){
//             break;
//         }
//         if(lpf(i) >  10){
//             count++;
//             cout<<i<<endl;
//         }
//         i++;
//     }
//     return 0;
// }



