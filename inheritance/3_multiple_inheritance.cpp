#include<iostream>
using namespace std;
class A{
	int p;
	public:
	int prin(){
		return p;
	}
};
class B:A{
	int q;
	public:
	B():A(),q(100){}
	void print(){
		cout<< "q: "<< q << "  p" << prin()<<endl;
	}
};
class C:B{
	int w;
	public:
	C():B(),w(200){}
	void pr(){
		cout<<"w: " <<w << endl;
		print();
	}
};
int main(){
	C obj;
	obj.pr();
}

