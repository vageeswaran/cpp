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
	int t,n,i;
	cin>>n;
	int a[n],b[n];
	int temp=0,temp1=0,max=0,max1=0,z;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		temp+=a[i];
		temp1+=b[i];
		if(temp>temp1)
		{
			z=temp-temp1;
			if(z>=max)
			{
				max=z;
			}
				
		}
		else
		{
			z=temp1-temp;
			if(z>=max1)
			{
				max1=z;
			}
		}
	}
	if(max>max1)
		cout<<"1 "<<max<<endl;
	else
		cout<<"2 "<<max1<<endl;
	return 0;
}



