#include<iostream>
using namespace std;
int fun(int a=0,int b=0,int c=0){
return a+b+c;
}
float fun(int a,float z,float x=0){
return a+z+x;
}
float fun(float f,float f1=0){
return f+f1;
}
float fun(float f,int a){
return f+a;
}

int main(){
int x,y;
float f,f1;
cout<<"int x::";
cin>>x;
cout<<"int y::";
cin>>y;
cout<<endl;
cout<<"float f::";
cin>>f;
cout<<"float f1::";
cin>>f1;
cout<<endl;

cout<<"int x::"<<x<<"  int y::"<<y<<endl;
cout<<"float f::"<<f<<"  float f1::"<<f1<<endl;

cout<<"fun()::"<<fun()<<endl;//ambiguos bcoz of[ int fun(int=0,int=0,int=0) ] and [float fun(float=0,float=0)] compiler confusing between two fun i.e
cout<<"fun(int x)::"<<fun(x)<<endl;
cout<<"fun(int x,int y)::"<<fun(x,y)<<endl;
cout<<"fun(int x,float f)::"<<fun(x,f)<<endl;
cout<<"fun(float f1,int y)::"<<fun(f1,y)<<endl;
cout<<"fun(int x,int y,int x)::"<<fun(x,y,x)<<endl;
cout<<"fun(int x,float f, float f1)::"<<fun(x,f,f1)<<endl;
cout<<"fun(float f, float f1)::"<<fun(f,f1)<<endl;
}
