/*1) Write a C++ programe with the Employee class that creates five employees; sets their Age,Year of Service, and Salary; provide  a method of Employee that reports how many thousands of rupees the employee earns, rounded to the nearest Rs.80,000/-.*/
#include<iostream>
using namespace std;
class emp{
	int age;
	int yos;
	double salary;
	public:
	void set();
	void print();
	friend double earns_money ( emp & o );
};
void emp::set(){
	cout<<"enter age :: ";
	cin>>age;
	cout<<"enter year of services :: ";
	cin>>yos;
	cout<<"enter salary :: ";
	cin>>salary;
}
void emp::print(){
	cout<<"Age :: "<<age<<"\tYear of services :: "<<yos<<"\tSalary :: "<<salary<<endl;
}
double earns_money ( emp & o){
	static double total;
	total = total + o.salary;
	return total;
}
int main(){
	emp obj[5];
	double Total;
	int j=sizeof(obj)/sizeof(obj[0]);
	for(int i=0;i<j;i++){
		cout<<"fill up object - "<<i<<" contain..."<<endl;
		obj[i].set();
	}
	for(int i=0;i<j;i++){
		cout<<"print object - "<<i<<" contain..."<<endl;
		obj[i].print();
	}
	for(int i=0;i<j;i++)
	Total=earns_money(obj[i]);

	cout<<"total money :: "<<Total<<endl;

}
