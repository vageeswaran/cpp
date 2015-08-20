#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	string s,z,rs;
	cin>>s;
	int l=s.length(),k,i;
	for(k=l;k>=1;k--){
	
	for(i=0;i<l-k+1;i++)
	{
		rs=s.substr(i,k);
		z=rs;
		reverse(rs.begin(),rs.end());
		if(z==rs)
			cout<<z<<" "<<rs<<endl;
	}
	}
	return 0;
}



