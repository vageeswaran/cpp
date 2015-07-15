#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector <vector <int> > v;
  vector <int> vi;
    vector <int> pro;
        vector <int> vii;
  int i,j,k;
  string s,temp;
  getline(cin,s);
  stringstream ss(s);
  stringstream ss1;
  while(ss>>k)
  {
    vi.push_back(k);

	if (ss.peek() == ' ')
	      ss.ignore();
  }
  int l=vi.size(),z,pr;
  for(k=2;k<=l;k++)
  {
     for(i=0;i<l-k+1;i++)
     {
        z=i+k;
        pr=1;
        for(j=i;j<z;j++)
        {
           pr=pr*vi[j];
        }
        pro.push_back(pr);
        vii.push_back(i);
        vii.push_back(z-1);
        vii.push_back(pr);
        v.push_back(vii);
        vii.clear();
     }
  }
int  max=0;
  for(i=0;i<pro.size();i++)
  {
     if(max<=pro[i])
     	max=pro[i];
  }
  for(i=0;i<v.size();i++)
  {
  	if(v[i][2]==max)
  	{

  		for(j=v[i][0];j<=v[i][1];j++)
  			cout<<vi[j]<<" ";
  	}
  }
  return 0;
}
