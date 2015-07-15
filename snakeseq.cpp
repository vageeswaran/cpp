#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector <vector <int> > vi;
 vector <int> v;
 int n,i,j,flag,flag1,k;
// cin>>n;
n=11;
 int a[11]={9,8,7,5,3,0,1,-2,-3,1,2},b[n];
 
 for(i=0;i<n;i++){
// cin>>a[i];
 b[i]=0;
 }
 i=0;
 k=0;
 while(1)
 {
    if((b[i]==0&&(a[i]==(a[k]+1)))||(b[i]==0 && (a[i]==(a[k]-1)))||(i==0&&b[i]==0))
    {
       b[i]=1;
       flag=0;
       v.push_back(a[i]);
       for(j=0;j<n;j++)
       {
          if(b[j]==0 && (a[j]==(a[i]+1)||(a[j]==(a[i]-1)))){
          	 i=j;
          	 k=i;
          	 b[j]=1;
          	 flag=1;
          	 v.push_back(a[j]);
          	 break;
          }
       }
       if(flag==1){
	       if(i==(n-1)){
	       	i=0;
	       	}
	       	flag1=0;
	       	for(j=0;j<n;j++)
	       	{
	       	  if(b[j]==0)
	       	  	flag1=1;
	       	}
	       	if(flag1==0)
	       		break;
       	}
       	else
       	{
       	   i++;
       	   vi.push_back(v);
       	   v.clear();
       	   	flag1=0;
	       	for(j=0;j<n;j++)
	       	{
	       	  if(b[j]==0)
	       	  	flag1=1;
	       	}
	       	if(flag1==0)
	       		break;
			else
			{
			   for(j=0;j<n;j++)
			   {
			   		if(b[j]==0){
			   			i=j;
			   			break;
			   	    }
			   }
			}
       	}
    }
    else{b[i]=1;
    	i++;
    	}
 }
 for(i=0;i<n;i++)
 {
    for(j=0;j<vi[i].size();j++)
    	cout<<vi[i][j]<<" ";
    
    cout<<endl;
 }
return 0;
}
