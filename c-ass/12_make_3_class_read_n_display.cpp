#include<iostream>
using namespace std;
class B;
class C;
class A{
	int x;
	public:
	friend void set(A &,B &, C &);
	friend void read(A &,B &,C &);
};
class B{
	int y;
	public:
	friend void set(A &,B &, C &);
	friend void read(A &,B &,C &);
};
class C{
	int z;
	public:
	friend void set(A &,B &, C &);
	friend void read(A &,B &,C &);
};
void set(A &o1,B &o2, C &o3)
{
	cin>>o1.x;
	cin>>o2.y;
	cin>>o3.z;
}
void read(A&o,B&o1,C&o2){
	cout<<"Class A--X :: "<<o.x<<endl;
	cout<<"Class B--Y :: "<<o1.y<<endl;
	cout<<"Class C--Z :: "<<o2.z<<endl;
}
int main(){
	A o1;
	B o2;
	C o3;
	set(o1,o2,o3);
/*	cout<<"Enter X::";
	o1.set();	
	cout<<"Enter Y::";
	o2.set();	
	cout<<"Enter Z::";
	o3.set();
*/	cout<<"reading Data.."<<endl;
	read(o1,o2,o3);
}	
