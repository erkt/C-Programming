#include<iostream>
using namespace std;
class B;
class A{
	int x;
	public:
	void setdata(){
		cin>>x;
	}
	void print(){
		cout<<"X :: "<<x<<endl;
	}
	friend void swp(A &,B &);
};
class B{
	int y;
	public:
	void setdata(){
		cin>>y;
	}
	void print(){
		cout<<"Y :: " <<y<<endl;
	}
	friend void  swp(A &,B &);
};
void swp(A &ob,B &ob1){
	/*int temp=ob.x;
	  ob.x=ob1.y;
	  ob1.y=temp;
	 */
	ob.x=ob.x + ob1.y - (ob1.y = ob.x) ;
	/*ob.x ^= ob1.y;
	  ob1.y ^= ob.x;
	  ob.x ^= ob1.y;
	 */
	/*ob.x += ob1.y ;
	  ob1.y = ob.x - ob1.y ;
	  ob.x -= ob1.y;
	 */
}

int main(){
	A obj1;
	B obj2;
	cout<<"enter the  X value :: ";
	obj1.setdata();
	cout<<"enter the  Y value :: ";
	obj2.setdata();
	cout<<"Before Swaping::"<<endl;
	obj1.print();
	obj2.print();
	swp(obj1,obj2);
	cout<<"After Swaping::"<<endl;
	obj1.print();
	obj2.print();
}

