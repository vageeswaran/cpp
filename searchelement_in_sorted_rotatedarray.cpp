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
int findindx(int a[],int n,int k)
{
	int l=0,r=n-1,m;
	while(l<=r)
	{
		m=l+(r-l)/2;
		
		if(a[m]==k)
			return m;
		
		if(a[l]<=a[m])
		{
			if(a[l]<=k&&k<a[m])
				r=m-1;
			else
				l=m+1;
		}
		else
		{
			if(a[m]<k&&k<=a[r])
				l=m+1;
			else
				r=m-1;
		}
	}
	return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int a[n];
    int key,i;
    for(i=0;i<n;i++)
    	cin>>a[i];
    cin>>key;
    int ans=findindx(a,n,key);
    cout<<ans<<endl;
	return 0;
}



