#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map <string, int> msi;

#define fl(i,a,b) for(long long i=a;i<b;i++)
#define fi(i,a,b) for(int i=a;i<b;i++)

int main()
{
	vii x;
	x.push_back(make_pair(2,3));
	x.push_back(make_pair(3,5));
	x.push_back(make_pair(5,2));
	x.push_back(make_pair(3,4));
	int l=x.size(),j,i;
	sort(x.begin(),x.end());
	for(i=0;i<l;i++)
	{
		cout<<x[i].first<<","<<x[i].second<<endl;
	}
    
	return 0;
}


