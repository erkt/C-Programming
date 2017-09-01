#include<iostream>
using namespace std;
class A{
	int a[10];
	public:
	A(){
		for (int i=0;i<10;i++)
			a[i]=i+10;
	}
	int operator[](int i){
		return a[i];
	}
};
int main(){
A obj;
for(int i=0;i<10;i++)
cout<<obj[i]<<" ";
cout<< endl;
}
