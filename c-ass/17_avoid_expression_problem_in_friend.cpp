#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(int a=0,int b=0):x(a),y(b){}
	void print(){
		cout << "x : " << x << " y : " << y << endl;
	}
	A operator +(int z){
		A temp;
		temp.x=x+z;
		temp.y=y+z;
		return temp;
	}
	friend A operator +(int ,A &ob);
};
	 A operator +(int z, A & ob){
		A temp;
		temp.x= z + ob.x;
		temp.y= z + ob.y;
		return temp;
	}

int main(){
	A obj(998,987);
	obj.print();
	obj = obj + 100;
	obj.print();
	obj =  100 + obj;
	obj.print();
}
