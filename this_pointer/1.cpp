#include<iostream>
using namespace std;
class A{
	int x;
	public:
	void set();
	void print();
};
void A::set(){
cin>>this->x;
}
void A::print(){
cout<<" this->X :: " << this->x << endl;
cout<<" this.X :: " <<( *this).x << endl;
}
int main(){
	A obj;
	obj.set();
	obj.print();
}

