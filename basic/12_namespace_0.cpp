///using scoperesolution operator
#include<iostream>
using namespace std;
void test(){
	cout<<"In test function..!!"<<endl;
}
/*int x=100;/////not declare two time 
  int x=200;*/
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
int x=200;
int main(){
	test();
	cout<<"x::"<<x<<endl;
	first::test();
	cout<<"first::x--"<<first::x<<endl;
	second::test();
	cout<<"second::x--"<<second::x<<endl;
}
