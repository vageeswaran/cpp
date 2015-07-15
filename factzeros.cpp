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
	ll t,k,n,c=0;
	ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
		while(n)	
		{
			c+=n/5;
			n=n/5;
		}
	
	cout<<c<<endl;
	}
	return 0;
}



