#include<iostream>
using namespace std;
class A{
	char *p,*q,*x;
	public:
	A(){
		p=new char[100];
		cout<<"enter string 1..";
		cin>>p;
		q=new char[100];
		cout<<"enter string 2..";
		cin>>q;
	}
	void pri(){
		cout<<p<<endl;
		cout<<q<<endl;
	}
	char* operator + (char &,char&);
	void add_pri(){
		x=new char[200];
		x=p+q;
		cout<<x<<endl;
	}
};
char * A::operator+(char &p1,char &q1){
	char *z=new char[200];
	for(int i=0;p1[i];i++) z[i]=p1[i];
	for(i-=1;q1[i];i++) z[i]=q1[i];
	return z;
}
main(){
	A a;
	a.pri();
	a.add_pri();
	
}
