#include<iostream>
using namespace std;
class A{
	int x;
	mutable int y;
	public:
	A():x(9),y(99){}
	void modify() const {
		//x=10;
		y=100;
	}
	void print() const {
		cout<<" x  :: "<< x << " y :: " << y << endl;
	}
};
int main(){
	const A o;
	o.print();
	A o1;
	o1.modify();
	o1.print();
}

