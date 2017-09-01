#include<iostream>
using namespace std;
class A{
	int a;
	public:
	A():a(900){}
	int prin(){
		return a;
	}
};
class B:A{
	int q;
	public:
	B():A(),q(100){}
	void pri(){
		cout<< "B::q" << q<<"        "  <<prin()<<endl;
	}
};

class C{
	int w;
	public:
	C():w(444){}
	int p(){
		return w;
	}
};
class D : C,B{
	int s;
	public:
	D():B(),C(),s(567){}
	void print(){
		cout<< " D :: s " << s<<"     "<<p()<<endl;
		pri();
	}
};
int main(){
	D obj;
	obj.print();
}
