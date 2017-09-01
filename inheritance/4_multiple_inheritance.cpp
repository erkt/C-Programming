#include<iostream>
using namespace std;
class A{
public:
int p;
A():p(100){}
};
class B{
public:
int q;
B():q(100){}
};
class C{
public:
int z;
C():z(100){}
};

class D:public C,public B,public A{
int w;
public:
void print(){
w=9000;
cout<<"w:: " << w <<"q:: "<< q << "z:: " << z << "p :: " << p<< endl;

}
};
int main(){
D o;
o.print();

}
