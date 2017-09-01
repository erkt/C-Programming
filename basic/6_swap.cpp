#include<iostream>
using namespace std;
void swp(int &,int &);
int main(){
int x,y;
cin >>x>>y;
cout <<"Before  x:"<<x<<" y:"<<y<<endl;
swp(x,y);
cout <<"After  x:"<<x<<" y:"<<y<<endl;
}
void swp(int &x,int &y){
int temp=x;
x=y;
y=temp;
}
