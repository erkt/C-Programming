#include<iostream>
#include<string.h>
using namespace std;
class BANK_2;
class BANK_1{
	char name[100];
	double amount;
	int acc;
	public:
	void enter (){
		cout<<"Enter Account number::";
		cin>>acc;
		cout<<"Enter Name::";
		cin>>name;	
		cout<<"Enter Amount::";
		cin>>amount;
	}
	void display(){
		cout<<"Account Number :: "<<acc<<" \tName :: " <<name<<"\t Amount :: "<< amount<<endl;
	}
	friend void  transfer(BANK_1 &,BANK_2 &);
};
class BANK_2{
	char name[100];
	double amount;
	int acc;
	public:
	void enter(){
		cout<<"Enter Account number::";
		cin>>acc;
		cout<<"Enter Name::";
		cin>>name;	
		cout<<"Enter Amount::";
		cin>>amount;
	}
	void display(){
		cout<<"Account Number :: "<<acc<<"\t Name :: " <<name<<"\t Amount :: "<< amount<<endl;
	}
	friend void transfer(BANK_1 &,BANK_2 &);
};
void transfer(BANK_1 &ob,BANK_2 &ob1){
	double t_amount;
	int option;
	cout<<"enter transfer amount::";
	cin>>t_amount;
	cout<<"you want to transfer from"<<endl<<" BANK_1 to BANK_2 press ( 1 ) "<<endl<<"\t\t OR "<<endl<<" BANK_2 to BANK_1 press ( 2 ) ::";
	cin>>option;
	switch(option){
		case 1:
			ob.amount = ob.amount - t_amount;
			ob1.amount = ob1.amount + t_amount;
			break;
		case 2:
			ob1.amount = ob1.amount - t_amount;
			ob.amount = ob.amount + t_amount;
			break;
		default:
			cout<<"No more BANK detail"<<endl;
			break;
	}
}
int main(){
	BANK_1 obj;
	obj.enter();
	obj.display();
	BANK_2 oj2;
	oj2.enter();
	oj2.display();
	transfer(obj,oj2);
	cout<<"after transfering detail.."<<endl;
	cout<<"BANK_1"<<endl;	
	obj.display();
	cout<<"BANK_2"<<endl;
	oj2.display();

}

