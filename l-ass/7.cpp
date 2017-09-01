//7) Write a C++ program to impliment Private Constructor.
#include<iostream>
using namespace std;
class A{
	private:
	int a;
	A():a(99){
		cout<<" Private Constructor " << endl;
	}
	~A(){
		cout<< " Private Destructor " << endl;
	}
	void print(){
		cout << " a :: " << a << endl;
	}
	
	public :
	static void fun(){
		A o;
		o.print();
	}
};
int main(){
//	A a;
	A :: fun();
}
