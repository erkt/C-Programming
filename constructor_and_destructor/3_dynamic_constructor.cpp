#include<iostream>
using namespace std;
class A{
	int x;
	public:
	A():x(10000){
		cout<<" D.Constructor"<<endl;
	}
	A(int a,int b):x(a){
	cout<<" P.constructor"<<endl;
	}
	void print(){
		cout<<" x :: " << x<< endl;
	}
};
int main(){
	//A o;///default constructor
	//o.print();

	A *ptr = new A;////dynamic default constructor...
	ptr -> print();
	cout << " O-1 ptr :: " << ptr << endl;
	delete ptr;
	ptr=0;
	cout << " O-1 after  del  ptr :: " << ptr << endl;

	ptr= new A(1,2);
	ptr -> print();
	cout << " O-2 ptr :: " << ptr << endl;
	delete ptr;
	ptr=0;

	cout << " O-2 after  del  ptr :: " << ptr << endl;
	
//	ptr->print();
}
