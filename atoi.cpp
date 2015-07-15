#include <bits/stdc++.h> 
using namespace std;
int main()
{

//const char *str1 = "  -+515V 5793K 627 2381";
const char *str1 = "  +7";
    int num1 = std::atoi(str1);
    cout<<num1;
/*    const char *str1 = "42";
    const char *str2 = "3.14 t s159";
    const char *str3 = "31337 with words";
    const char *str4 = "words and 2";
    int num1 = std::atoi(str1);
    int num2 = std::atoi(str2);
    int num3 = std::atoi(str3);
    int num4 = std::atoi(str4);
 
    std::cout << "std::atoi(\"" << str1 << "\") is " << num1 << '\n';
    std::cout << "std::atoi(\"" << str2 << "\") is " << num2 << '\n';
    std::cout << "std::atoi(\"" << str3 << "\") is " << num3 << '\n';
    std::cout << "std::atoi(\"" << str4 << "\") is " << num4 << '\n';*/
    
/*    string s,x;
    getline(cin,s);
    x="";
    int flag=0;
    int i,sign=1;
    for(i=0;i<s.length();i++)
    {
    	if(s[i]=='-')
    		sign=-1;
    	if(s[i]==' '){
    		flag=1;
    		break;
    		}
    	if((s[i]-'0')>=0&&(s[i]-'0')<=9)
    		break;
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
    	cout<<"-2147483648";
    else if(j==2147483647)
    	cout<<"2147483647";
    else
    	cout<<j;
    }
    	}*/
}
