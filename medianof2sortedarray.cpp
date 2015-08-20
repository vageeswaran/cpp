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
int median(int a[],int n)
{
	if(n%2==0)
		return (a[n/2]+a[n/2-1])/2;
	else
		return a[n/2];
}
int getMedian(int a[],int b[],int n)
{
	int m1,m2;
	if(n==0)
		return -1;
	else if(n==1)
		return (a[0] + b[0])/2;
	else if(n==2)
		return (max(a[0],b[0])+min(a[1],b[1]))/2;
	
	m1=median(a,n);
	m2=median(b,n);
	if(m1==m2)
		return m1;
	else if(m1<m2)
	{
		if(n%2==0)
			return getMedian(a+n/2-1,b,n-n/2+1);
		else
			return getMedian(a+n/2,b,n-n/2);
	}
	else
	{
		if(n%2==0)
			return getMedian(b+n/2-1,a,n-n/2+1);
		else
			return getMedian(b+n/2,a,n-n/2);
	}
}
int main()
{
 ios_base::sync_with_stdio(false);
 int  ar1[] = {1, 12, 15, 26, 38};
   int ar2[] = {2, 13, 17, 30, 45};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]),ans=0;
    if (n1 == n2)
      ans=getMedian(ar1, ar2, n1);
    
    cout<<ans;
	return 0;
}




