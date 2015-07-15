#include<bits/stdc++.h>
using namespace std;

int binsearch(int a[],int n,int k)
{
	int l=0,r=n-1,m;
	while(l<=r)
	{
		m=l+(r-l)/2;
		if(a[m]==k)
			return m;
		else if(a[m]>k)
		{
			r=m-1;
		}
		else
		{
			l=m+1;
		}
	}
	return -1;
}
int bin(int a[],int l,int r,int k)
{
	if(l<=r)
	{
		int m=l+(r-l)/2;
		if(a[m]==k) return m;
		
		if(a[m]>k) return bin(a,l,m-1,k);
		
		return bin(a,m+1,r,k);
	}
	return -1;
}
int main()
{
	int n,i,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	int ans=bin(a,0,n,k);
	if(ans<0)
		cout<<"Not found";
	else
		cout<<"Found At "<<ans;
	
}
