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
	ll t,n,c,x,z,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		z=0;
		for(i=0;i<n;i++)
		{
			cin>>x;
			z+=x;
		}
		z=c-z;
		if(z>=0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}



