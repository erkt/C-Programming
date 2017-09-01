#include<iostream>
using namespace std;
class A{
	int *p;
	public:
	A(){
		cout<<" C " << endl;
		p=new int;
		cout<<"Dynamic Add:: "<<p<<endl;
	}
	~A(){
		cout<<" D " << endl;
	}
};
int main(){
	{
		A obj;
	}
	A obj2;
}

