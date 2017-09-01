//5) Write a C++ program to demonstrate Shallow Copy.
#include<iostream>
using namespace std;
class a{
	int q;
	public:
	a():q(900){}
	void print(){
		cout<<" q :: " << q << endl;
	}
};
int main(){
	a o;
	o.print();
	a o1=o;
	o1.print();
}
