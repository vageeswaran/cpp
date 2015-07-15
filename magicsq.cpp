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
	ll t,z,i,j,k;
	cin>>t;
	z=t*t;
	k=1;
	int a[t][t];
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
			a[i][j]=0;
	}
	i=0;
	j=t/2;
	
	while(k<=z)
	{
		a[i][j]=k;
		i-=1;
		j+=1;
		if(k%t==0)
		{
			i+=2;
			j-=1;
		}
		else
		{
			if(i<0)
				i+=t;
			else if(j==t)
				j-=t;
		}
		k+=1;
	}
	int s1,s2;
	for(i=0;i<t;i++)
	{
		s1=0;s2=0;
		for(j=0;j<t;j++){
			s1+=a[i][j];
			s2+=a[j][i];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}



