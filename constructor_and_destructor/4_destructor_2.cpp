#include<iostream>
using namespace std;
class A{
	int *p;
	public:
	A(){
		cout<<" C "<<endl;
		p=new int[3];
		cout<<" Add :: " << p << endl;
	}
	~A(){
		cout<<" D "<< endl;
		delete []p;
	}
};
int main(){
	{
		A ob;
	}
	A ob1;
}
