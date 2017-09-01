///using directive namespace
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
//	test();
//	cout<<"x::"<<x<<endl;

/*{
	using namespace second;
	cout<<"x--"<<x<<endl;
	test();
	}
*/	using namespace first;
	cout<<"x--"<<x<<endl;
	test();
	

}	
