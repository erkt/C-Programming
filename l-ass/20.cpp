/*20) Declare a class of vehicle. Derived classes are two_wheeler, three_wheeler and 	four_wheeler . Display the properties of each type of vehicle using member functions of 	classes ?
 */
#include<iostream>
using namespace std;
class vehicle{

	char company[100],reg[100];
	int dateofpu;
	public:
	void set(){
		cout<<"Enter The comapany:";
		cin>>company;
		cout<<"Enter the registration number:";
		cin>>reg;
		cout<<"Enter the date:";
		cin>>dateofpu;
	}
	void print(){
		cout<<"Company :: " << company << endl;
		cout<<"Registration number :: " << reg << endl;
		cout<<"date of purchase :: " << company << endl;

	}


};
class two_wheeler:public vehicle{
	char name[100],Owner[100];
	public:
	void set(){
		cout<<"Enter The Owner name:";
		cin>>Owner;
		cout<<"Enter The Two_Wheeler name:";
		cin>>name;
		vehicle::set();
	}
	void print(){
		cout<<"Owner Name: "<< Owner<<endl;
		cout<<"Two_Wheeler Name:"<< name<<endl;
		vehicle::print();
	}
};
class three_wheeler:public vehicle{
	char name[100],Owner[100];
	public:
	void set(){
		cout<<"Enter The Owner name:";
		cin>>Owner;
		cout<<"Enter The Three_Wheeler name:";
		cin>>name;
		vehicle::set();
	}
	void print(){
		cout<<"Owner Name: "<< Owner<<endl;
		cout<<"Three_Wheeler Name:"<< name<<endl;
		vehicle::print();
	}
};
class four_wheeler:public vehicle{
	char name[100],Owner[100];
	public:
	void set(){
		cout<<"Enter The Owner name:";
		cin>>Owner;
		cout<<"Enter The four_Wheeler name:";
		cin>>name;
		vehicle::set();
	}
	void print(){
		cout<<"Owner Name: "<< Owner<<endl;
		cout<<"four_Wheeler Name:"<< name<<endl;
		vehicle::print();
	}
};
int main(){
	four_wheeler car;
	three_wheeler _auto;
	two_wheeler bike;
	bike.set();
	bike.print();
	_auto.set();
	_auto.print();
	car.set();
	car.print();
}
