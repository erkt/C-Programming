#include<iostream>
using namespace std;
class B{
	int x,y;
	public:
	void set(){
		x=900,y=99;
	}
	void print(){
		cout<<"x: " << x << "  y: " <<y<<endl;
	}
};
class D:public B{
	public:
		int z;
};
int main(){
	D ob;
	ob.set();
	ob.z=987;
	ob.print();
	cout<<"z: "<< ob.z << endl;
}

