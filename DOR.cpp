// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll l, ll r)
{
    // freopen("/home/home/cpp/inputf.in", "r", stdin);
    // freopen("/home/home/cpp/outputf.in", "w", stdout);
    // ios_base::sync_with_stdio(0);    
    // lli t;
    // cin>>t;
    // while(t--){
        // lli l, r;
        // cin>>l>>r;
        ll bit = (int)log2(l^r) + 1;
        bit--;
        ll A = r, B = r;
        B = B&(~(1<<bit));
        for(ll i = 0;i<bit;i++){
            ll hi = 1<<i;
            B = B|hi;
        }
        A= A|(~(1<<bit));
        for(ll i = 0;i<bit;i++){
            A= A&(~(1<<i));
        }
        cout<<(A|B)<<endl;
        return (A|B);
    // }
    // return 0;
}
int main()
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    

	int q;
	scanf("%d", &q);
	for (; q; q --)
	{
	    ll l, r;
	    scanf("%lld%lld", &l, &r);
	    ll Mx = 0, i = 60;
	    for (; ~ i; i --, Mx |= (l & (1LL << i)))
	        if ((l ^ r) >> i & 1LL)
	            break;
	    Mx |= (1LL << (i + 1)) - 1;
	    // printf("%lld\n", Mx);
        cout<<Mx<<endl;
        cout<<solve(l, r)<<endl;
        if(Mx == solve(l, r)){
            cout<<"checked"<<endl;
        }
        else{
            cout<<"got you"<<endl;
        }
	}
	return 0;
}