#include<iostream>
using namespace std;
class A{
	int *p;
	int i;
	public:
	A(){
		cout<< " Constructor " << endl;
		p=new int[3];
		i = 10;
		cout<< " Add :: " << p<< endl;
	}
	~A(){
		cout<< " Destructor " << endl;
		delete []p;
		//		p=0;
		cout << " ADD :: " << p << endl;
	}
	void print(){
//		int i=90;
		cout << " --------- "<< i << endl;
	}
};
int main(){
	{
		A o;
	}
	{
		A o2;
	}
	A *ptr = new A;
	delete ptr;
	ptr=0;
	cout << "ptr -" <<  ptr;
	ptr -> print();
//	A ptr;
}
