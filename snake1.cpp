#include<bits/stdc++.h>
using namespace std;
int main(){
vector <vector <int> > vi;
vector <int> v;
int n,i,j,flag,flag1,k=0,x;
cin>>n;
int a[n],b[n][n],c[n][n];
for(i=0;i<n;i++)
 cin>>a[i];
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		c[i][j]=a[j];b[i][j]=0;
	}
}
for(i=0;i<n;i++){
	j=i;
    v.push_back(c[i][j]);
	while(1){
		if(b[i][j]==0){
			flag=0;
	        for(x=j+1;x<n;x++){
 		         if(b[i][x]==0 && (c[i][x]==(c[i][j]+1)||(c[i][x]==(c[i][j]-1)))){
 		         	 b[i][j]=1;
 	         		 j=x;
 	         		 k=j; 	         		 
 	         		 flag=1;
 	         		 v.push_back(c[i][x]);
 	         		 break;
 	         	}
 	      	  }
 	      	  if(flag==0){
 	      	  		flag1=0;
 	      	  		for(x=0;x<j;x++){  
					    if(b[i][x]==0 && (c[i][x]==(c[i][j]+1)||(c[i][x]==(c[i][j]-1)))){
 	   	         		 	 b[i][j]=1;
 	   	         		 	 j=x;
		 	         		 k=j;
 	 		         		 flag1=1;
 			         		 v.push_back(c[i][x]);
 			         		 break;
 		   	         	 }
					}
					if(flag1==0){
					vi.push_back(v);
       	   			v.clear();
       	   			break;
					}
 	      	  }
		}
		else
		   j++;
	}
}
int pos=0,max=0,z,cnt;
for(i=0;i<n;i++){
    z=vi[i].size();
    if(z>=max){max=z;pos=i;}
 }
vector <vector <int> > vl;
vector <int> vli;
for(j=0;j<n;j++) {
  if(vi[j].size()==max){	 
 	vl.push_back(vi[j]);
}
}
for(i=0;i<vl.size();i++){
   z=vl[i][0];
   for(j=0;j<n;j++){
     if(a[j]==z){
     	pos=j;break;
     	}
   }
   cnt=0;
   pos++;
   for(j=1;j<vl[i].size();j++){
   		if(vl[i][j]==a[pos]){
   			cnt++;
   			pos++;
   			}
   		else
   			break;
   }
   vli.push_back(cnt);
}
max=0;
for(i=0;i<vli.size();i++)
	if(vli[i]>=max)
	  max=vli[i];
for(i=0;i<vli.size();i++){
   if(vli[i]==max){
   		for(j=0;j<vl[i].size();j++)
   			cout<<vl[i][j]<<" ";
   		break;
   }
}
return 0;
}
