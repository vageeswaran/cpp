#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,q;
  string s,ss,z,zs;
  getline(cin,s);
  cin>>q;
  while(q--){
  cin>>i>>j>>k>>l;
  i--;j--;k--;l--;
  zs=s;
  //cout<<zs<<endl;
  reverse(zs.begin()+i,zs.begin()+j+1);
  ss=zs.substr(k,l-k+1);
  z=ss;
  reverse(ss.begin(),ss.end());
//  cout<<zs<<endl;
  //cout<<z<<"rev "<<ss<<endl;  
  if(z==ss)
  	cout<<"Yes\n";
  else cout<<"No\n";
  }
}
