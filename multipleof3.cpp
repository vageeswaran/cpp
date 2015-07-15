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
ll mul3(ll n)
{
	ll oc=0,ec=0;
	
	if(n<0) n=-n;
	if(n==0) return 1;
	if(n==1) return 0;
	
	while(n)
	{
		if(n&1)	oc++;
		
		n=n>>1;
		
		if(n&1) ec++;
		
		n=n>>1;
	}
	
	return mul3(abs(ec-oc));
}
int main()
{
	ll t,n,ans;
	cin>>t;
	while(t--){
	
	cin>>n;
	if(mul3(n))
		cout<<"YES\n";
	else
		cout<<"NO\n";
		
}
	return 0;
}



