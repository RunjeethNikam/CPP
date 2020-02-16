#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli Oc, Of, Od, Cs, Cb, Cm, Cd;
int main(int argc, char const *argv[])
{
    lli D;
    cin>>D;
    lli Cost1=0;
    {
        // for online
        cin>>Oc>>Of>>Od;
        if(D <= Of){
            Cost1 = Oc;
        }
        else{
            Cost1 += Oc;
            Cost1 += ((D - Of) <= 0) ? 0 : (D-Of)*Od;
        }
    }
    lli Cost2= 0;
    {
        // for offline
        cin>>Cs>>Cb>>Cm>>Cd;
        Cost2 += Cb;
        Cost2 += (D/Cs) * Cm;
        Cost2 += D*Cd;

    }
    (Cost1 <= Cost2)? cout<<"Online Taxi" : cout<<"Classic Taxi";
    return 0;
}
