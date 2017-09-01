#include<iostream>
using namespace std;
int main(){
int x;
int &r=x;
cin >>x;
cout<<"x:"<<x<<endl;
cout<<"&r:"<<&r<<endl;//default address is hex value print in hex if want to unsinged then typecast
cout<<"&r:"<<(unsigned)&r<<endl;//default address is hex value print in hex if want to unsinged then typecast
//int &a=10;//invalid
//int &q;//invalid
}


