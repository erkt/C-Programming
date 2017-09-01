#include<iostream>
using namespace std;
void fun()
{
	cout << "In fun .. " << endl;
}
class A{
	int x;
	public:
	A(int a=0):x(a){
		cout<<"parametrics constructer"<<endl;
	}
//	A(A ob):x(ob.x){  /// invalid
	A(A &ob):x(ob.x){
		cout<<"explict constructer"<<endl;
	}
	void print(){
		cout<<"X :: "<< x << endl;
		fun();
	}
};
/*id fu(A ob){
cout<<"function"<<endl;
}*/
A fu(A ob){
cout<<"function----1"<<endl;
return ob;
}
/*int fu(A &ob)
{
cout<<"function----1"<<endl;
return 100;
}*/
int main(){
	A obj(2000);
	
//	A ob2=obj;
//	obj.print();
//	ob2.print();
//	fu(obj);
	A obj2;
	//int x=fu(obj);
	obj2=fu(obj);
	obj2.print();
}
