//*******************************copy constructor 1) shallow copy constrctor  2) deep copy constructor **************************//
#include<iostream>
#include<cstring>
using namespace std;
/*
class A{
	char *s;
	public:
	A(const char *p){///////shallow constructor bcoz here not call explictly copy constructor but call default copy constructor call 
		cout<<"P.C"<<endl;
		s=new char[strlen(p)+1];
		strcpy(s,p);
	}
	void modify(){
		s[0]='S';
	}
	void print(){
		cout<<" String :: " << s << endl;
	}
};
*/
class A{
	char *s;
	public:
	A(const char *p){///////deep constructor bcoz here  call explictly copy constructor 
		cout<<"p.c"<<endl;
		s=new char[strlen(p)+1];
		strcpy(s,p);
	}
	A( A & ob){
		cout<< " c.c "<< endl;
		s=new char [strlen(ob.s)+1];
		strcpy(s,ob.s);
	}
	void modify(){
		s[0]='S';
	}
	void print(){
		cout<<"Stirng :: " << s << endl;
	}

};
int main(){
	A obj("Vector");
	cout<<"Before creating 2nd object"<<endl;
	obj.print();
	cout<<"After creating 2nd object"<<endl;
	A obj2=obj;
	obj.modify();
	obj.print();
	obj2.print();
}
