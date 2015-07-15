#include<bits/stdc++.h>
using namespace std;
int myatoi(string s)
{
	string x;
    x="";
    int flag=0;
    int i,sign=1;
    for(i=0;i<s.length();i++)
    {
    	if(s[i]=='-')
    		sign=-1;
    	else if(s[i]=='+')
    		sign=2;
    	
    	else if(s[i]==' '&&sign==-1){
    		flag=1;
    		break;
    		}
    	else if(s[i]==' '&&sign==2){flag=1;break;}
    	else if(s[i]==' '){}
    	else if((s[i]-'0')>=0&&(s[i]-'0')<=9)
    		break;
    	else
    	{
        	flag=1;break;
    	}
    }
    if(flag==1)
    	return 0;
    else{
    int z;
    for(;i<s.length();i++)
    {
    	z=(int)s[i];
    	if(	z>=48&&z<=57)
    		x+=s[i];
    	else
    		break;
    }
    stringstream ss;
    if(sign!=1)
    	x='-'+x;
    if(x=="")
    	return 0;
    else
    {
    ss<<x;
    int j;
    ss>>j;
    if(j==-2147483648)
    	return -2147483648;
    else if(j==2147483647)
    	return 2147483647;
    else
    	return j;
    }
    	}
}
int main()
{
        string s;
    getline(cin,s);
    
	cout<<myatoi(s)<<endl;
}
