#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,temp;
  int i=0,j,k,l,sum=0,z;
  cin>>s;
  l=s.length();
  while(i<l){
  	 z=(int)s[i];
  	 if(z>47 && z<58){
  	 	temp="";
  	 	temp+=s[i];
  	 	k=1;
  	 	j=i+1;
  	 	while(j<l){
  	 		z=(int)s[j];
  	 		if(z>47 && z<58)
  	 		{	temp+=s[j];
  	 			k++;
  	 		}
  	 		else
  	 		{	break;
  	 		}
  	 		j++;
  	 	}
  	 	i=j;
  	 	if(k==3) {
  	 		int n=0,zx;
			for(int m=0;m<3;m++)
			{
				zx=(int)temp[m] -48;
				n=10*n+zx;
			}
			sum+=n;
  	 	}
  	 }
  	 else
	  	 i++;
  }
  cout<<sum<<endl;
  return 0;  
}
