#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
	int T;
	cin>>T;
	int v[26][26];
	memset(v,-1,sizeof(v));
	char root;
	cin>>root;
	int root_num=root-'a';
	//cout<<root_num<<endl;
		string s;
		cin>>s;
		string c="";
		vector<string>vr;
		for(int i=0;i<s.length();i++)
		{
		    if(s[i]<='z' && s[i]>='a')
		    c+=s[i];
		    if(s[i]==',')
		    {vr.push_back(c);
		    c.clear();}
		}
		vr.push_back(c);
		/*for(auto i=vr.begin();i!=vr.end();i++)
		{
		    cout<<*i<<endl;
		}*/
	for(auto i=vr.begin();i!=vr.end();i++)
	{
	string st=*i;
		for(int j=0;j<st.length();j++)
		{
		    
			if(st[j]<='z' && st[j]>='a'){
			    
// 			cout<<st[j]<<endl;
				v[st[0]-'a'][j]=st[j]-'a';
			}
		}
// 		cout<<endl;
	}
	//cout<<"*********"<<endl;
	// for(int i=0;i<26;i++)
	// {
	//     for(int j=0;j<26;j++)
	//     cout<<v[i][j]<<" ";
	//     cout<<endl;
	// }
	// cout<<endl;
	// cout<<"*********"<<endl;
	string search;
	cin>>search;
	int arr[search.length()];
	for(int i=0;i<search.length();i++)
	{
		arr[i]=search[i]-'a';
	}
	int count=0;
	int k=0;
	int i=root_num;
	int y=root_num;
	for(;i<26;i++)
	{ 
	//cout<<"**"<<y<<endl;
			for(int j=0;j<26;j++)
			{
					if(v[y][j]==arr[k] && k<search.length())
					{
						k++;
						//cout<<y<<" "<<"Yes"<<endl;
						count++;
					}
					if(k==search.length())
					break;
			}
			y=arr[k-1];
	}
	if(count==search.length())
		cout<<1<<endl;
	else
		cout<<0<<endl;
}