#include<iostream>
using namespace std;
class b;

class a{
	char *p;
	
	public:
	void set(){
		p =new char[1000];
		cin >> p;
	}
	void print(){
		cout<< p<< endl;
	}
	friend	 void con( a & o, b & o1);
};
class b{
	char *q;
	public:
	void set(){
		q =new char[100];
		cin >> q;
	}
	void print(){
		cout<< q<< endl;
	}
	friend void  con( a & o, b & o1);
};

void  con( a & o,b & o1){
	int i;
	for (i=0;o.p[i];i++);
	for (int j=0;o1.q[j];j++,i++)
		o.p[i]=o1.q[j];
}

int main(){
	a o;
	b o1;
	o.set();
	o.print();
	o1.set();
	o1.print();
	con(o,o1);

	o.print();
	o1.print();
}
