#include<iostream>
using namespace std;
class A{
int x,y;
public:
A(int a,int b):x(a),y(b){}
void operator ()(int a ,int b){
x=a,y=b;
}
void print(){
cout<<" x : " << x << " y : " << y << endl;
}
};
int main(){
A obj(10,20);
obj.print();
obj(20,40);
obj.print();
obj(40,60);
obj.print();
}
