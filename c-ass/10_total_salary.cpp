#include<iostream>
using namespace std;
class wife;
class husband{
	char name[100];
	int age;
	double salary;
	public:
	void fillup();
	void display();
	friend double addition(husband &,wife &);
};
class wife{
	char name[100];
	int age;
	double salary;
	public:
	void fillup();
	void display();
	friend double addition(husband &, wife &);
};
void husband::fillup(){
	cout<<"enter name::";
	cin>>name;
	cout<<"enter Age::";
	cin>>age;
	cout<<"enter salary::";
	cin>>salary;
}
void husband::display(){
	cout<<"Name :: "<<name<<"\tAge :: " <<age<<"\tsalary :: "<<salary<<endl;
}  
void wife::fillup(){
	cout<<"enter name::";
	cin>>name;
	cout<<"enter Age::";
	cin>>age;
	cout<<"enter salary::";
	cin>>salary;
}
void wife::display(){
	cout<<"Name :: "<<name<<"\tAge :: " <<age<<"\tsalary :: "<<salary<<endl;
}  
double  addition (husband &ob,wife &ob1){
	return (ob.salary + ob1.salary);
}
int main(){
	husband obj;
	wife obj1;
	cout<<"Enter the Husband detail.."<<endl;
	obj.fillup();
	obj.display();
	cout<<"Enter the Wife detail.."<<endl;
	obj1.fillup();
	obj1.display();
	double total=addition(obj,obj1);
	cout<<"\tTotal salary :: "<<total<<endl;
}

