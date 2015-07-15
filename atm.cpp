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
	float b,z;
	int w;
	cin>>w>>b;
	
	
	if((w%5==0)&&((w+0.5)<b))
	{
		z=b-w-0.50;
		cout << setprecision (2) << fixed << z<<endl;	
	}
	else
		cout << setprecision (2) << fixed << b<<endl;	
	return 0;
}



