#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int lcm(int a, int b) { return (a/gcd(a,b))*b; }
int llcm(int l,int a[])
{
        int     i, result;
        result = 1;
        for (i = 0; i < l; i++){
     result = lcm(result, a[i]);
     
 }
}
int main() {
	int n,i,pr,g,t;
	cin>>t;
	while(t--)
	{
	
	cin>>n;
	int a[n];
	
	pr=1;
	g=1;
	for(i=0;i<n;i++){
		cin>>a[i];
		
		g=g*(a[i]/gcd(g,a[i]));
	}
	llcm(n,a);
	cout<<g<<endl;
	}
	return 0;
}
