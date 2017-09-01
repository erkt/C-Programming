#include<iostream>
#include"dummy.cpp"
using namespace std;
int add(int x,int y){
return x+y;
}
int add(int x,int y,int z){
return x+y+z;
}
float add(int x,float y){
return x+y;
}
float add(float x,int y){
return x+y;
}
float add(float x,float y){
return x+y;
}
int main(){
int x=20,y=40;
float f=50.366,f1=60.958;
cout<<"Add::"<<add(x,y)<<endl;
cout<<"Add::"<<add(x,y,x)<<endl;
cout<<"Add::"<<add(x,f)<<endl;
cout<<"Add::"<<add(f1,y)<<endl;
cout<<"Add::"<<add(f,f1)<<endl;
cout<<"Add::"<<add(f,f1,x,y)<<endl;
}
