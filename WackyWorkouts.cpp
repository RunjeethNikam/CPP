#include<bits/stdc++.h>
#define lli long long int
#define mod %1000000007
using namespace std;
void multiply(lli F[2][2], lli M[2][2]); 

void power(lli F[2][2], lli n); 

/* function that returns nth Fibonacci number */
lli fib(lli n) 
{ 
lli F[2][2] = {{1,1},{1,0}}; 
if (n == 0) 
	return 0; 
power(F, n-1); 
return F[0][0]mod; 
} 

/* Optimized version of power() in method 4 */
void power(lli F[2][2], lli n) 
{ 
if( n == 0 || n == 1) 
	return; 
lli M[2][2] = {{1,1},{1,0}}; 

power(F, n/2); 
multiply(F, F); 

if (n%2 != 0) 
	multiply(F, M); 
} 

void multiply(lli F[2][2], lli M[2][2]) 
{ 
lli x = (F[0][0]mod*M[0][0]mod)mod + (F[0][1]mod*M[1][0]mod)mod; 
lli y = (F[0][0]mod*M[0][1]mod)mod + (F[0][1]mod*M[1][1]mod)mod; 
lli z = (F[1][0]mod*M[0][0]mod)mod + (F[1][1]mod*M[1][0]mod)mod; 
lli w = (F[1][0]mod*M[0][1]mod)mod + (F[1][1]mod*M[1][1]mod)mod; 

F[0][0] = (x)mod; 
F[0][1] = (y)mod; 
F[1][0] = (z)mod; 
F[1][1] = (w)mod; 
} 

/* Driver program to test above function */
int main() 
{
ll t;
cin>>t;
while (t--)
{
    lli n;
    cin>>n;
    n += 2; 
    // prllif("%d", fib(9)mod); 
    cout<<(fib(n)mod)<<endl;;
}
return 0; 
} 
