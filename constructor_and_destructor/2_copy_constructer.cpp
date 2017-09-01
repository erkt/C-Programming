#include<iostream>
using namespace std;
class A{
	int x;
	public:
	A(int a):x(a){
		cout<<"parametrics constructer"<<endl;
	}
//	A(A ob):x(ob.x){  /// invalid
	A(A &ob):x(ob.x){
		cout<<"explict constructer"<<endl;
	}
	void print(){
		cout<<"X :: "<< x << endl;
	}
};
int main(){
	A obj(2000);
	A ob2=obj;
	obj.print();
	ob2.print();
}
