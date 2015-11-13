#include<bits/stdc++.h>
using namespace std;
class stud
{
    int roll;
	string name;
	float m1,m2,m3,total,per;
	public:
	int getrno();
	void getdata();
	void printdata();
	void calc();
};
int stud::getrno()
{
	return roll;
}
void stud::getdata()
{
	cout<<"Enter roll no";cin>>roll;
	cout<<"Enter name";cin>>name;
	cout<<"Enter marks in subject1,subject2,subject3";cin>>m1>>m2>>m3;
}
void stud::printdata()
{
	cout<<"\nroll no "<<roll;
	cout<<"\nname "<<name;
	cout<<"\nmarks in subject1,subject2,subject3 "<<m1<<" "<<m2<<" "<<m3;
	cout<<"\nTOTAL = "<<total;
	cout<<"\npercentage = "<<per;
	cout<<endl;
}
void stud::calc()
{
	total=m1+m2+m3;
	per=total/3;
}
int main()
{
 	stud s[10];
 	char ch='y';
 	int i=0,j;
 	do{
 	
 	s[i].getdata();
 	s[i].calc();
 	cout<<"do you want to continue";cin>>ch;
 	i++;
 	}while(ch=='y'||ch=='Y');
 	for(j=0;j<i;j++)
 		s[j].printdata();
 	return 0;
}



