///  area for rectangle traingle square sphere...
#include<iostream>
using namespace std;

float area(float w,float h){
	return (w*h);
}
float area(float a){
	return(a*a);
}
float area(float r,float pi,int x){
	return( x*pi*r*r);
}
float area(float x,float y, float z){
	return (x*y*z);
}
int main(){
	float width,height,length,radius,base;
	cout<<"Width::";
	cin>>width;
	cout<<"Height::";
	cin>>height;
	cout<<"Length::";
	cin>>length;
	cout<<"Radius::";
	cin>>radius;
	cout<<"Base::";
	cin>>base;
	cout<<"width:: "<<width<<" height:: "<<height;
	cout<<" Area of rectangle:: "<<area(width,height) <<endl;
	cout<<"length::"<<length;
	cout<<" Area of square:: "<<area(length) <<endl;
	cout<<"radius::"<<radius;
	cout<<" Area of sphere::"<<area(radius,3.14,4) <<endl;
	cout<<"base:: "<<base<<" height:: "<<height;
	cout<<" Area of Traingle::"<<area(0.5,base,height) <<endl;
}
