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
	ll t,n,x1,x2,x3,y1,y2,y3,x,y,z;
	cin>>t;
	while(t--)
	{
       cin>>n;
       cin>>x1>>y1;
       cin>>x2>>y2;
       cin>>x3>>y3;
       n=pow(n,2);
       x=pow((x1-x2),2)+pow((y1-y2),2);
       y=pow((x1-x3),2)+pow((y1-y3),2);
       z=pow((x2-x3),2)+pow((y3-y2),2);
       if((x<=n&&y<=n)||(x<=n&&z<=n)||(y<=n&&z<=n))
         cout<<"yes\n";
       else
       	 cout<<"no\n";
	}
	return 0;
}



