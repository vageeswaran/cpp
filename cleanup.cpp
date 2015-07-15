#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map <string, int> msi;
#define mod 1000000007
#define MAX 500
#define fl(i,a,b) for(long long i=a;i<b;i++)
#define fi(i,a,b) for(int i=a;i<b;i++)

int main()
{
 ios_base::sync_with_stdio(false);
	ll t,n,m,i,x,flag;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int a[n+2];
		for(i=1;i<=n;i++)
		    a[i]=0;
		for(i=0;i<m;i++)
		{
			cin>>x;
			a[x]=1;
		}
		flag=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]==0&&flag==0)
			{
				a[i]=2;
				flag=1;
			}
			else if(a[i]==0&&flag==1)
			{
				a[i]=3;
				flag=0;
			}
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]==2)
				cout<<i<<" ";
		}
		cout<<endl;
		for(i=1;i<=n;i++)
		{
			if(a[i]==3)
				cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}



