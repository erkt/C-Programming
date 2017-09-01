#include<iostream>
using namespace std;
class A{
int x,y;
public:
void set();
void print();
A modify();
};
void A::set(){
cout<<"X::";
cin>>x;
cout<<"y::";
cin>>y;
}
void A::print(){
cout<<"X::"<<x<<"  Y::" << y<< endl;
}
A A::modify(){
x=x+100,y=y+100;
return *this;
}
int main(){
A obj,obj1,obj2;
obj.set();
obj.print();
obj2=obj.modify();
obj2.print();
obj1.set();
obj1.print();
obj2=obj1.modify();
obj2.print();
}
