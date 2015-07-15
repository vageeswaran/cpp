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
ll fast_exp(int base, int exp,int MOD) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}
int main()
{
 ios_base::sync_with_stdio(false);
	ll t,b,e,m;
	cin>>t;
	while(t--)
	{
		cin>>b>>e>>m;
		cout<<fast_exp(b,e,m);
	}
	return 0;
}



