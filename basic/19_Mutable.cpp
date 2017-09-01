#include<iostream>
using namespace std;
struct A{
int a;
mutable char ch;
};
int main(){
const A object={10,'K'};
cout<<"object.a::"<<object.a<<" object.ch::"<<object.ch<<endl;
//object.a=20;////invalid bcoz this is not mutable memebr of const struct  
object.ch='A';
cout<<"object.a::"<<object.a<<" object.ch::"<<object.ch<<endl;
}

