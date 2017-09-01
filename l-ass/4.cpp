//4) Write a C++ program to find total salary of husband and wife using a friend function. Create a class to hold the information of husband and another for the wife information.

#include<iostream>
using namespace std;
class wife;
class hus{
	double salary;
	char name[20];
	public:
	void set(){
		cout << " Enter name : " ;
		cin >> name;
		cout << " Enter salary : ";
		cin >> salary;
	}
	void print(){
		cout << "Name :: " << name << "  Salary :: " << salary << endl;
	}
	friend double t_salary( hus &,wife &);
};
class wife{
	double salary;
	char name[20];
	public:
	void set(){
		cout << " Enter name : " ;
		cin >> name;
		cout << " Enter salary : ";
		cin >> salary;
	}
	void print(){
		cout << "Name :: " << name << "  Salary :: " << salary << endl;
	}
	friend double t_salary( hus &,wife &);
};
 double t_salary( hus &o, wife &ob){
	return o.salary + ob.salary;
}
int main(){
	hus o;
	o.set();
	o.print();
	wife o1;
	o1.set();
	o1.print();
	double tsalary = t_salary( o,o1);
	cout<<" Total salary " << tsalary<< endl;
}
