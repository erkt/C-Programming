#include<iostream>
using namespace std;
class A{
int a,b;
public:
A(int a,int b):a(a),b(b){}
void print(){
cout<<a<<" "<< b <<  endl;
}
A operator*(){
return *this;
}
A* operator->(){
return this;
}
};
int main(){
A obj(100,200);
obj->print();
(*obj).print();
}
