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
	string s,z;
	getline(cin,s);
	vector <string> v;
	for(int j=0;j<s.length();j++)
	{
		int zz=(int)s[j];
		if(zz>=48 && zz<=57){}
		else
			s[j]='#';
	}
	stringstream ss(s);
	while(getline(ss,z,'#'))
	{
		int xx=(int)z[0];
		if(xx!=0)
			v.push_back(z);
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
		//cout<<v[i]<<" ";
	return 0;
}



