// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int test;
//     cin>>test;
//     vector<bool> primes(1000 + 1, true);
//     vector<int> prime;
//     for(int i = 2;i<primes.size();i++){
//         if(primes[i]){
//             int j = i*i;
//             while(j < primes.size()){
//                 primes[j] = false;
//                 j += i;
//             }
//             prime.push_back(i);
//         }
//     }
//     while(test--){
//         int N;
//         cin>>N;
//         for(int i = 1;i<=N;i++){
//             if(i == 1){
//                 cout<<"1 ";
//             }
//             else if(i&1){
//                 //odd
//                 for(int j = 1;j<prime.size();j++){
//                     if(i % prime[j] == 0){
//                         cout<<prime[j]<<" ";
//                         break;  
//                     }
//                 }
//             }
//             else{
//                 //even
//                 cout<<"2 ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int test;
    cin>>test;
    while (test--)
    {
        int N;
        cin>>N;
        vector<bool> prime(N+1,true);
        vector<int> prime1(N+1, -1);
        for(int i = 2;i<prime.size();i++){
            if(prime[i]){
                int j = i*i;
                while(j<prime1.size()){
                    if(prime1[j] == -1){
                        prime[j] = false;
                        prime1[j] = i;
                    }
                    j += i;
                }
            }
        }
        for(int i = 1;i<prime1.size();i++){
            if(prime1[i] == -1)
            cout<<i<<" ";
            else
            cout<<prime1[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
