#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define bs binary_search
#define endl '\n'
#define start_clock clock_t beginn=clock()
#define end_clock clock_t endd=clock()
#define cal_exec_time double time_spent=(double)(endd-beginn)/CLOCKS_PER_SEC
#define print_exec_time cout<<endl<<time_spent<<" secs"

void build(ll arr[],ll segTree[],ll low,ll high,ll pos)
{
    if(low==high)
    {
        segTree[pos]=arr[low];
        return;
    }
    ll mid=low+(high-low)/2;// finding mid
    build(arr,segTree,low,mid,2*pos+1/*left child*/);
    build(arr,segTree,mid+1,high,2*pos+2/*right child*/);
    segTree[pos]=segTree[2*pos+1]+segTree[2*pos+2];// segtree at pos is the sum of the left child and the right child
}

void update(ll segTree[],ll lazy[],ll qlow,ll qhigh,ll low,ll high,ll val,ll pos)
{
    if(lazy[pos]!=0)
    {
        segTree[pos]+=(high-low+1)*lazy[pos];
        if(low!=high)
        {
            lazy[2*pos+1]+=lazy[pos];
            lazy[2*pos+2]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(low>high or qlow>high or qhigh<low)
        return;
    if(qlow<=low and qhigh>=high)
    {
        segTree[pos]+=(high-low+1)*val;//updating the values
        if(low!=high)
        {
            lazy[2*pos+1]+=val;
            lazy[2*pos+2]+=val;
        }
        return;
    }
    int mid=low+(high-low)/2;
    update(segTree,lazy,qlow,qhigh,low,mid,val,2*pos+1);
    update(segTree,lazy,qlow,qhigh,mid+1,high,val,2*pos+2);
    segTree[pos]=segTree[2*pos+1]+segTree[2*pos+2];
}

ll query(ll segTree[],ll lazy[],ll qlow,ll qhigh,ll low,ll high,ll pos)
{
    if(qlow>high or qhigh<low)
        return 0;
    if(lazy[pos]!=0)
    {
        segTree[pos]+=(high-low+1)*lazy[pos];
        if(low!=high)
        {
            lazy[2*pos+1]+=lazy[pos];
            lazy[2*pos+2]+=lazy[pos];
        }
        lazy[pos]=0;// push the pending update down
    }
    if(qlow<=low and qhigh>=high)
        return segTree[pos];
    ll mid=low+(high-low)/2;
    return query(segTree,lazy,qlow,qhigh,low,mid,2*pos+1)+query(segTree,lazy,qlow,qhigh,mid+1,high,2*pos+2);
}

int main() 
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
      ll n;
      cin>>n;
      ll v1[n],v2[n],v3[n],arr[n],segTree[4*n],lazy[4*n];
      vector<ll>v4(n);
      ll i;

      memset(segTree,0,sizeof(segTree));
      memset(lazy,0,sizeof(lazy));
      memset(arr,0,sizeof(arr));

      build(arr,segTree,0,n-1,0);

      for(i=0;i<n;i++)
         cin>>v1[i];
      for(i=0;i<n;i++)
         cin>>v2[i];
      
      for(i=0;i<n;i++)
      {
         ll start=i-v1[i];
         ll end=i+v1[i];
         if(start<0)
            start=0;
         if(end>=n)
            end=n-1;
         
         update(segTree,lazy,start,end,0,n-1,1,0);

        
      }

      for(i=0;i<n;i++)
      {
         v3[i]=query(segTree,lazy,i,i,0,n-1,0);
      }
      

      sort(v2,v2+n);
      sort(v3,v3+n);
      vector<ll>::iterator it;
      it=set_intersection(v2,v2+n,v3,v3+n,v4.begin());
      
      if((it-v4.begin())==n)
         cout<<"YES";
      else
         cout<<"NO";

      if(t)
         cout<<endl;
   }

   return 0;
}