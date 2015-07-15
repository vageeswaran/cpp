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
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n&1)
		{
			cout<<n-1<<endl;
		}
		else
		{
			cout<<n<<endl;
		}
	}
	return 0;
}



