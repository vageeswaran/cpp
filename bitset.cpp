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
	long int t,n=0,i;
	cin>>t;
	bitset <32> foo;
	foo=t;
	cout<<foo<<endl;
	string s=foo.to_string();
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	int tt=0;
	for(i=s.length()-1;i>=0;i--)
	{
		n+=(long int)pow(2,tt)*((long int)(s[i]-'0'));
		tt++;
	}
	cout<<n;
	return 0;
}



