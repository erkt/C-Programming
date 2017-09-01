#include<iostream>
using namespace std;
class A;
class B{
	public:
		void print(A &);
		void print1(A &);
		void print2(A &);
};

class A{
	int x;
	public:
	void set(){
		x=10;
	}
	friend void B::print1(A &);
};
//void B::print(A &ob){
//	cout<<" p-1 X :: "<<ob.x<<endl;
//}
void B::print1(A &ob1){
	cout<<" p-1 X :: "<<ob1.x<<endl;
}
//void B::print2(A &ob2){
//	cout<<" p-1 X :: "<<ob2.x<<endl;
//}
int main(){
	A obj;
	B obj2;
	obj.set();
//	obj2.print(obj);
	obj2.print1(obj);
//	obj2.print2(obj);
}
