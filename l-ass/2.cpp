//2) Write a C++ program to create a class complex with real and imaginary parts perform addition and subtraction of two complex objects.
#include<iostream>
using namespace std;
class Complex{

	double real,imag;
	public:
	void set(){
		cout<<"enter real :: ";
		cin>>real;
		cout<<"enter imaganry :: ";
		cin>>imag;
	}
	void print(){
		cout << " Real :: " << real << " Imaginary :: " << imag << endl;
	}
	friend Complex arithmatic ( Complex & , Complex & , char ch);
};
Complex arithmatic ( Complex & o , Complex & o1 , char ch){
Complex res;
switch(ch){
case '+': 
		res.real = o.real + o1.real;
		res.imag = o.imag + o1.imag;
		return res;	
case '-': 
		res.real = o.real - o1.real;
		res.imag = o.imag - o1.imag;
		return res;	
}
}
int main(){ 
Complex o,o1;
char ch;
o.set();
o.print();

o1.set();
o1.print();
Complex o2 ;
cout << " enter your operation :: " << " + - " << endl;
cin >> ch;
if(ch=='+') 
o2 = arithmatic( o , o1 , '+');
else if(ch == '-')
o2 = arithmatic( o , o1 , '-');
cout<< " Answer " << endl;
o2.print();

}
