#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A (int a,int b):x(a),y(b){}
	friend A operator -(A &ob);
	void print(){
		cout << " x : " << x << " y : " << y << endl;
	}
};
A operator - (A &ob){
	A temp;
	temp.x = -ob.x;
	temp.y = -ob.y;
	return temp;
}
int main(){
	A obj(90,98),obj1;
	obj.print();
	obj1 = -obj;
	obj1.print();
}
