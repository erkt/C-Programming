#include<iostream>
using namespace std;
int main(){
int x,y;
int *p;
int *&rp=p;
cin>>x>>y;
cout <<"x:"<<x<<" y:"<<y<<endl;
p=&x;
cout<<"x:"<<x<<" *rp:"<<*rp<<endl;
cout<<"&x:"<<&x<<" rp:"<<rp<<endl;
rp=&y;
cout<<"y:"<<y<<" *rp:"<<*rp<<endl;
cout<<"&y:"<<&y<<" rp:"<<rp<<endl;

cout<<"Done!!!"<<endl;
}
