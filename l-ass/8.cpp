//8) Write a C++ program to demonstrate Dynamic Constructor.
#include<iostream>
using namespace std;
class A{
int x;
public:
A(){
cout<< " constructor " << endl;
}
~A(){
cout<< " destructor "  << endl;
}
void print(){
cout << " x :: " << x << endl;
}
};

int main(){
 A *ptr = new A;
 delete ptr;
}
