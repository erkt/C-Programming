#include<iostream>
using  namespace std;
class A{
	int a;
	public:
	A():a(9909){}
	int pe(){
	return a;
	}
};
class B:A{
	public:
		void print(){
			cout<<"class A:: a" << pe()<< endl;
		}
};
class C:A{
	public:
		void print(){
			cout<<"class B:: a" << pe()<< endl;
		}
};
class D:A{
	public:
		void print(){
			cout<<"class C:: a" << pe()<< endl;
		}
};
int main(){
	B obj;
	C obj1;
	D obj2;
	obj.print();
	obj1.print();
	obj2.print();
}

