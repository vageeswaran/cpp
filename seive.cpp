#include<bits/stdc++.h>
using namespace std;
int p[2000000];
void seive(long long n)
{
	long long  i,j;
	for(i=0;i<=n;i++)p[i]=1;
	
	for(i=2;i<=(long long)sqrt(n);i++)
	{
		if(p[i])
		{
			for(j=i;j*i<=n;j++)
				p[i*j]=0;
		}
	}
	long long sum=0;
	cout<<"\nsum of primes less than "<<n<<"is ";
	for(i=2;i<n;i++)
	{
		if(p[i])
			sum+=i;
	}
	cout<<sum<<endl;
}/*
void findsol(int n)
{
	int res=0,i;
	for(i=2;i<=n/2;i++)
	{
		if(p[i] && p[n-i])
		{
		 cout<<i<<" "<<n-i<<endl;
		 
		}
	}
	
}*/
int main()
{
	long long n,ans;
	
	seive(2000000);
	cin>>n;
	//findsol(n);
	return 0;
}

