#include<iostream>
using namespace std;
struct A{
int a,b;
};
class B{
//private://///not use in other function
public://///use in any where
//protected://// not use in other funaction acept some function they have to permission
int x,y;
};
int main(){
////access bcoz of struct default is public
A obj;
cout<<" a:: "<<obj.a<<" b:: "<<obj.b<<endl;
 obj.a=100,obj.b=200;
cout<<" a:: "<<obj.a<<" b:: "<<obj.b<<endl;
////not access directly bcoz of class default is private

B obj1;
cout<<" x:: "<<obj1.x<<" y:: "<<obj1.y<<endl;
 obj1.x=1000,obj1.y=2000;
cout<<" x:: "<<obj1.x<<" y:: "<<obj1.y<<endl;




}
