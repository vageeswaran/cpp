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
int coun4(int n)
{
	if(n<4) return 0;
	int d=log10(n);
	int a[d+1],i;
	a[0]=0;a[1]=1;
	for(i=2;i<=d;i++)
		a[i]=a[i-1]*9+ceil(pow(10,i-1));
	
	int p=ceil(pow(10,d));
	int msd=n/p;
	if(msd==4)
	{
		return (msd)*a[d]+n%p+1;
	}
	if(msd>4)
	{
		 return (msd-1)*a[d] + p + coun4(n%p);
	}
	return (msd)*a[d] + coun4(n%p);
}
int sum_digit(int n)
{
	if(n<10)
	{
		return ((n)*(n+1))/2;
	}
	int d=log10(n);
	int a[d+1];
	a[0]=0,a[1]=45;
	for(int i=2;i<=d;i++)
		a[i]=a[i-1]*10+45*ceil(pow(10,i-1));
	int p=ceil(pow(10,d));
	int msd=n/p;
	return msd*a[d] + (msd*(msd-1)/2)*p + msd*(1+n%p) + sum_digit(n%p);
}
int main()
{
 ios_base::sync_with_stdio(false);
	int t,n;
	cin>>t;
	//cout<<coun4(t);
	cout<<sum_digit(t);
	return 0;
}



