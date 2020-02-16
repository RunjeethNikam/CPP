#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void computeLpsArray(char* pat, int M, int* lps){
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while(i<M){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}
void KMPSearch(char* pat, char* txt){
    int M = strlen(pat);
    int N = strlen(txt);
    int lps[M];
    computeLpsArray(pat, M, lps);
    int i = 0;
    int j = 0;
    while(i < N){
        if(pat[j] == txt[i]){
            j++;
            i++;
        }
        if(j == M){
            printf("found %d", i-j);
            j = lps[j-1];
        }
        else if(i<N && pat[j] != txt[i]){
            if(j != 0){
                j = lps[j-1];
            }
            else{
                i = i+1;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    char txt[] = "ABABADABACDABABCABAB";
    char pat[] = "ABABCABAB";
    KMPSearch(pat, txt);
    return 0;
}
