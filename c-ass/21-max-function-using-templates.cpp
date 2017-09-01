#include<iostream>
using namespace std;
template<class t,class t1>
void max(t &i ,t1 &j){
	if(i>j)
		cout << i<<" AND" << j<< " in between two max is "<<i<<endl;
	else
		cout << i<<" AND" << j<< " in between two max is "<<j<<endl;
}
int main(){
	int i,j;
	char ch,ch1;
	float f,f1;
	double d,d1;
	cout<<"enter intger"<<endl;
	cin >>i>>j;
	max(i,j);
	cout<<"enter character"<<endl;
	cin >>ch>>ch1;;
	max(ch,ch1);
	cout<<"enter float"<<endl;
	cin >>f>>f1;
	max(f,f1);
	cout<<"enter double"<<endl;
	cin >>d>>d1;
	max(d,d1);
	max(d,i);
}
