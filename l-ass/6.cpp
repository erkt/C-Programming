//6) Wrte a C++ program to demonstrate Deep Copy.
#include<iostream>
using namespace std;
class A{
int z;
public:
A():z(9000){}
A(A &ob){
cout<<"copy constructor expilicity" << endl;
z=ob.z;
}
void print(){
cout<<"z - " << z << endl;
}
};
int main(){
A o;
o.print();
A o1=o;
o1.print();
}
