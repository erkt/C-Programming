#include<iostream>
#include"dummy.cpp"
using namespace std;
namespace first{
int x=10;
}
namespace second{
int y=20;
}
int main(){
using namespace first;
cout<<"x::"<<x<<endl<<"y::"<<second::y<<endl<<"m::"<<m<<endl; 
}
