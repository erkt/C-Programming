///using declarative namespace
#include<iostream>
/*void test(){
	cout<<"In test function..!!"<<endl;
}*/
/*int x=100;/////not declare two time 
  int x=200;*/
using std:: cout;
using std:: endl;
namespace first{
	int x=1;
	void test(){
		cout<<"In first Function.."<<endl;
	}
}
namespace second{
	int x=2;
	void test(){
		cout<<"In second Function.."<<endl;
	}
}
using first:: x;
using second:: test;
//int x=200;
int main(){

	cout<<"x--"<<x<<endl;
	test();
	cout<<"x--"<<x<<endl;
	test();
	

}	
