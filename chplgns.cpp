#include<bits/stdc++.h>
using namespace std;
long long ss(long long a[],long long n,long long x)
{
   long long l,r,c,m,i;
   
   l=0;
   r=n-1;
   c=0;
   while(l<=r)
   {
   		m=l + (r-l)/2;
   		if (a[m] == x)  
 		{
 		   break;
 		}
    	if (a[m] < x)
    	{l = m + 1; 
        }
	    else{ r = m - 1; 
	    
	    }
   }   
   return m;
}
int main()
{
	long long t,n,m,min,c,x,y,i,j;
	cin>>t;
	while(t--)
	{
	   cin>>n;
	   long long a[n],b[n];
	   for(j=0;j<n;j++)
	   {
	   	  min=1000000007;
	      cin>>m;
	      while(m--)
	      {
	         cin>>x>>y;
	         if(x<=min)
	         	min=x;
	      }
	      a[j]=min;
	      b[j]=min;
	   }
	   
	   
	   sort(a,a+n);

	   for(i=0;i<n;i++)
	   {
	   	   cout<<n-ss(a,n,b[i])-1<<" ";
	   }
	   cout<<endl;
	}
}
