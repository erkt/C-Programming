#include<iostream>
using namespace std;
class A{
	int x;
	public:
/*	A(){///default constructor
		cout<<"constructor"<<endl;
		cout<<"X :: "<<x<<endl;
		x=90;
	}
 */
/*	A(int a){ ////not proper initilization 
		cout<<"constructor"<<endl;
		cout<<"X :: " <<x<<endl;
		x=a;
	} */
	A(int a):x(a){   /// proper initilization
	cout<<"constructor"<<endl;
		cout<<"X :: " << x <<endl;
	}

	void print(){
		cout<<"X :: " << x <<endl;
	}
};
int main(){
	A obj(911),obj1(811),obj2(711);
	obj.print();
	obj1.print();
	obj2.print();
}
