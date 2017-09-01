#include<iostream>
using namespace std;
class B;
class C;
class A{
	int a[5];
	public:
	void set(){
		for (int i=0;i<5;i++)
			cin>>a[i];
	}
	friend void addition(A &,B &,C &);
};
class B{
	int b[5];
	public:
	void set(){
		for (int i=0;i<5;i++)
			cin>>b[i];
	}
	friend void addition(A &,B &,C &);
};
class C{
	int ans[5];
	public:
	void print(){
		for(int i=0;i<5;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	friend void addition(A &,B &,C &);

};
void addition (A&o,B&o1,C&o2){
	for(int i=0;i<5;i++)
		o2.ans[i] = o.a[i] + o1.b[i] ;
}
int main(){
	A ob;
	B ob1;
	C ob2;
	cout<<"enter 1st ary"<<endl;
	ob.set();
	cout<<"enter 2st ary"<<endl;
	ob1.set();
	addition(ob,ob1,ob2);
	cout<<"ans ary"<<endl;
	ob2.print();
}

