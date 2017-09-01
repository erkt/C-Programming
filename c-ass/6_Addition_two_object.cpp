#include<iostream>
using namespace std;
class Complex{
	int real,imga;
	public:
	void set(int,int);
	void print();
	Complex add(Complex &,Complex &);
};
void Complex::set(int a,int b){
	real=a,imga=b;
}
void Complex::print(){
	cout<<" real:: "<< real << " imaganry " << imga <<endl;
}
Complex Complex::add(Complex &o,Complex &o1){
	Complex res;
	res.real=o.real+o1.real;
	res.imga=o.imga+o1.imga;
	return res;
}
int main(){
	Complex obj1,obj2,obj3;
	int x,y;
	cout<<"enter the object-1 two number::";
	cin>>x>>y;
	obj1.set(x,y);
	cout<<"enter the object-2 two number::";
	cin>>x>>y;
	obj2.set(x,y);
	obj3=obj3.add(obj1,obj2);
	cout<<"Object-1 as data"<<endl;
	obj1.print();
	cout<<"Object-2 as data"<<endl;
	obj2.print();
	cout<<"Object-3 as ans"<<endl;
	obj3.print();
}

