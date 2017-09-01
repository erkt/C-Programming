#include<iostream>
using namespace std;
class A{
	int x;
	public:
	void set(){
	x=100;	
	}
	void print(){
	cout<<" X :: "<<x<<endl;
	}
																				class B{
		int y;
		public:
		void set(){
		y=200;
		}
		void print(){
		cout<<"Y :: " <<y<<endl;
		}
	};
};
int main(){
A obj;
A::B obj2;
obj.set();
obj.print();
obj2.set();
obj2.print();
}
