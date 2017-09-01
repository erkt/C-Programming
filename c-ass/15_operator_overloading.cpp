///// WAP to evalute the expression 
//   RES= obj1 + obj2 * obj3 / obj4 - obj5 + obj6;

#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(int a=0,int b=0):x(a),y(b){}
	void print(){
		cout << " x :: " << x << " y :: " << y << endl;
	}
	A& operator *( A & o){
		static	A temp;
		temp.x=x*o.x;
		temp.y=y*o.y;
		return temp;
	}
	A& operator /(A &o){
		static	A temp;
		temp.x=x/o.x;
		temp.y=y/o.y;
		return temp;
	}
	A& operator +(A &o){
		static	A temp;
		temp.x=x+o.x;
		temp.y=y+o.y;
		return temp;
	}
	A& operator -(A &o){
		static	A temp;
		temp.x=x-o.x;
		temp.y=y-o.y;
		return temp;
	}
};
int main(){
	int a,b;
	cout << "enter the value : " ;
	cin >> a;
	cout << "enter the value : " ;
	cin >> b;
	A obj1(a,b);
	cout << "enter the value : " ;
	cin >> a;
	cout << "enter the value : " ;
	cin >> b;
	A obj2(a,b);
	cout << "enter the value : " ;
	cin >> a;
	cout << "enter the value : " ;
	cin >> b;
	A obj3(a,b);
	cout << "enter the value : " ;
	cin >> a;
	cout << "enter the value : " ;
	cin >> b;
	A obj4(a,b);
	cout << "enter the value : " ;
	cin >> a;
	cout << "enter the value : " ;
	cin >> b;
	A obj5(a,b);
	cout << "enter the value : " ;
	cin >> a;
	cout << "enter the value : " ;
	cin >> b;
	A obj6(a,b);

	A RES;
	RES = obj1 + obj2 * obj3 / obj4 - obj5 + obj6;
	RES . print();
}
