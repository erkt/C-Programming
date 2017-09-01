#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	void operator ++(){///pre increment  ++obj
	++x;
	++y;
	}
	//void operator --(){	--x;--y;	}
	A operator --(){A test; test.x=--x;test.y=--y;	}
//	void operator --(int){	x--;y--;	}
	A operator --(int){ A test; test.x=x--;test.y=y--;	}
//	void operator ++(int){////post increment   obj++ valid for not storing
	A operator ++(int){
	A temp;	
	temp.x=x++;
	temp.y=y++;
	return temp;
	}
	void print(){
		cout << " x : " << x << " y : " << y << endl;
	}
};
int main(){
	A obj(90,98),obj1(10,20),obj2;
	obj.print();
	++obj;
	obj.print();
	--obj;
	obj.print();
	obj1.print();
	obj1++;
	obj1.print();
	obj1--;
	obj1.print();
	obj2.print();
	obj2=obj1++;
	obj2.print();
	obj2=--obj1;
	obj2.print();
}
