#include<iostream>
using namespace std;
class A{//default is private
int x,y;

public:///convert now here onward is public 
void set(void){
cout<<"Set data....!!"<<endl;
x=200,y=400;
}
void print(void){
cout<<"Print data...!!"<<endl;
cout<<"X:: "<<x<<" Y:: "<<y<<endl;
}
};
int main(){
A obj;
obj.set();///this also not possible bcoz class default is private and other can't access that if you want to access that make sure that function should
obj.print();/// be a public
/*  this is not possible bcoz this object try to access the private member of class
obj.x=100;//if u want to access that then use member function of that same class ...
obj.y=300;///indirectly we can access that ..(take permission and access it)
cout<<"X:: "<<x<<" Y:: "<<y<<endl;
*/
}

