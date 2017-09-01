#include<iostream>
using namespace std;
class B;
class A{
	int x,y;
	friend class B;
	public:
	void set(B &);
	void print(B &);
};

class B{
	int a,b;
	friend class A;
	public:
	void set(A &);
	void print(A &);
};

void A::set(B & ob){
	cout<<"enter the data 'a':: "<<endl;
	cin>>ob.a;
	cout<< " 'b' :: "<<endl;
	cin>>ob.b;
}
void A::print(B & ob){
	cout<<"DATA :: 'a' :: "<<ob. a << " 'b' :: " << ob.b << endl;
}
void B::set(A & ob1){
	cout<<"enter the data 'x' :: "<<endl;
	cin>>ob1.x;
	cout<< " 'y' :: "<<endl;
	cin>>ob1.y;
}
void B::print(A & ob1){
	cout<<"DATA :: 'x :: "<< ob1.x << " 'y' :: " << ob1.y << endl;
}

int main()
{
	A obj;
	B obj1;
	cout<<"Data enter into the class B and printing using class A ...."<<endl;
	obj.set(obj1);
	obj.print(obj1);

	cout<<"Data enter into the class A and printing using class B ...."<<endl;

	obj1.set(obj);
	obj1.print(obj);
}
