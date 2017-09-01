#include<iostream>
using namespace std;
class Complex{
	int real,imag;
	public:
	void set(int, int);
	void print();
	Complex add(Complex &);
};
void Complex :: set (int a,int b) {
	real=a,imag=b;
}
void Complex :: print() {
	cout << "Real :: " << real <<  " Imaganry :: " << imag << endl;
}

Complex Complex :: add(Complex &ob){
	Complex res;
	res.real = real + ob.real;
	res.imag = imag + ob.imag;
	return res;
}

int main(){
	Complex obj,obj1,obj2;
	cout<<"setting the data for obj.."<<endl;
	obj.set(199,399);
	obj.print();
	cout<<endl<<"setting the data for obj1.."<<endl;
	obj1.set(1,1);
	obj1.print();
	cout<<endl<<"addition of two obj and obj1.."<<endl;
	obj2=obj1.add(obj);
	obj2.print();
}
