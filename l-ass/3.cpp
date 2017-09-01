//3) Write a C++ program to swap two variables using function. (Don't use Pointers).
#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	void set(){
		cout<<" enter x :: ";
		cin >> x;
		cout << " enter y :: ";
		cin >> y;
	}
	void print(){
		cout << " x :: " << x << " y :: " << y << endl;
	}
	friend void swp ( A &o);            
};
void swp(A &o){
o.x = o.x + o.y - ( o.y = o.x);
}
int main(){
	A o;
	o.set();
	cout<< " Before Swaping :: "; 
	o.print();
	swp(o);
	cout<< " After Swaping  :: "; 
	o.print();
}
