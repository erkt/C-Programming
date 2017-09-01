#include<iostream>
using namespace std;
int a[5];
int& array(int index);
int main(){
	int n;
	cin >>n;
	int (&ra)[5]=a;
	for(int i=0;i<5;i++)
		cin>>a[i];

	for(int i=0;i<5;i++)
		cout <<"a:["<<i<<"]:"<<ra[i]<<endl;

	for(int i=0;i<5;i++)
		//array(i)=a[i]+5;//////lvalue reqiured   int array(int index);
		array(i)=a[i]+5;////lvalue reqiured   int & array(int index);

	cout<<"a::"<<a<<"  ra::"<<ra<<endl;
	cout<<"a+1::"<<a+1<<"  ra+1::"<<ra+1<<endl;
	cout<<"&a+1::"<<&a+1<<"  &ra+1::"<<&ra+1<<endl;
	cout<<"Done!!!"<<endl;
}
int& array(int i){
	return a[i];
}
