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
int minn(int a,int b,int c)
{
	if(a<b)
		return a<c?a:c;
	else
		return b<c?b:c;
}
int cost[100][100];
int mincost(int m,int n)
{
	if(m<0||n<0)
		return mod;
	else if(m==0&&n==0)
		return cost[m][n];
	else
		return cost[m][n]+minn(mincost(m-1,n),mincost(m-1,n-1),mincost(m,n-1));
}
int mincostdp(int r,int c,int m,int n)
{
	int tp[r][c],i,j;
	tp[0][0]=cost[0][0];
	fi(i,1,m+1)
		tp[i][0]=tp[i-1][0] + cost[i][0];
	fi(j,1,n+1)
		tp[0][j]=tp[0][j-1]+cost[0][j];
	fi(i,1,m+1)
		fi(j,1,n+1)
			tp[i][j]=minn(tp[i-1][j-1],tp[i-1][j],tp[i][j-1])+cost[i][j];
	return tp[m][n];
}
int main()
{
 ios_base::sync_with_stdio(false);
 	int r,c,i,j;
 	cin>>r>>c;
 	fi(i,0,r)
 	{
 		fi(j,0,c)
 		{
 			cin>>cost[i][j];
 		}
 	}
 	int x,y;
 	cin>>x>>y;
 	//int ans=mincost(x,y);
 	int ans2=mincostdp(r,c,x,y);
 	//cout<<ans<<endl;
 	cout<<ans2<<endl;
	return 0;
}



