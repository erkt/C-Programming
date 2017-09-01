#include<iostream>
using namespace std;
class person{
	char name[100],n_place[100],gender[10];
	int age;
	long long int contact_nu;
	public:
	void set(){
		cout<<"Enter the name : " ;
		cin>> name;
		cout<<"Enter the Native palce : ";
		cin>>n_place;
		cout<<"Gender : ";
		cin>>gender;
		cout<<"Age : ";
		cin>>age;
		cout<<"Contact Number : ";
		cin>>contact_nu;
	}
	void print(){
		cout<<" Name : "<<name<<endl; 
		cout<<" Native Place : "<<n_place<<endl; 
		cout<<" Gender : "<<gender<<endl; 
		cout<<" Age : "<<age<<endl; 
		cout<<" Contact Number : "<<contact_nu<<endl; 
	} 
};
class emp:public person{
	char com[100];
	double sala,ex;
	public:
	void set(){
		person::set();
		cout<<"Enter Comapany name : ";
		cin>>com;
		cout<<"Salary : ";
		cin>>sala;
		cout<<"Experiance : ";
		cin>>ex;
	}
	void print(){
		person::print();
		cout<<" Comapany Name : "<<com<<endl;
		cout<<" Salary : "<<sala<<endl;
		cout<<" Experiance : "<<ex<<endl;
	}
};
class stu:public person{
	char colle[100];
	double per,year;
	public:
	void set(){
		person::set();
		cout<<"Enter College name : ";
		cin>>colle;
		cout<<"Year : ";
		cin>>year;
		cout<<"Percentage : ";
		cin>>per;
	}
	void print(){
		person::print();
		cout<<" College Name : "<<colle<<endl;
		cout<<" Year : "<<year<<endl;
		cout<<" Percentage : "<<per<<endl;
	}
};
int main(){
stu obj;
emp obj1;
cout<<"enter student info..."<<endl;
obj.set();
cout<<"enter employee info..."<<endl;
obj1.set();

cout<<endl<<endl<<"Student Info.."<<endl;
obj.print();
cout<<endl<<endl<<"Employee Info.."<<endl;
obj1.print();
}

