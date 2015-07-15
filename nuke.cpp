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
	ll a,n,k,i;
	cin>>a>>n>>k;
	for(i=0;i<k;i++)
	{
		cout<<(a%(n+1))<<" ";
		a=a/(n+1);
	}
	cout<<endl;
	return 0;
}


	
