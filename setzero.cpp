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
	
	int i,j,k,n=3,m=4;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==0)
				a[i][j]=2;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==2)
			{
				a[i][j]=0;
				k=i-1;
				while(k>=0)
				{
					if(a[k][j]!=2)
					{
						a[k][j]=0;
					}
					k--;
				}
				k=i;
				while(k<n)
				{
					if(a[k][j]!=2)
					{
						a[k][j]=0;
					}
					k++;
				}
				k=j;
				while(k<m)
				{
					if(a[i][k]!=2)
					{
						a[i][k]=0;
					}
					k++;
				}
				k=j-1;
				while(k>=0)
				{
					if(a[i][k]!=2)
					{
						a[i][k]=0;
					}
					k--;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<a[i][j]<<" ";
		
		cout<<endl;
	}
		
	return 0;
}



