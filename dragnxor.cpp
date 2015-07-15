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
	ll t,n,a,b,i,l;
	cin>>t;
	string z;
	while(t--)
	{
		cin>>n>>a>>b;
		int arr[32],barr[32],carr[32];
		bitset <32> s(a);
		z=s.to_string();
		l=z.length();
		for(i=0;i<n;i++)
			arr[i]=z[l-i-1]-'0';
		bitset <32> s1(b);
		z=s1.to_string();
		l=z.length();
		for(i=0;i<n;i++)
			barr[i]=z[l-i-1]-'0';
		
		for(i=0;i<n;i++)
			carr[i]=arr[i]^barr[i];
		
		for(i=0;i<n;i++)
			cout<<carr[i];
	}
	return 0;
}



