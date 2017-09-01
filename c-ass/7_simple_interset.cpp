#include<iostream>
using namespace std;
class interset {

	float p_amount,n_year,r_rate,si,ta;//si=simple interst ta=total amount
	public :
	void set();
	void print();
	void cal();
};
void interset::set(){
	cout<<"enter the principle amount::";
	cin>>p_amount;
	cout<<"enter the no of year::";
	cin>>n_year;
	cout<<"enter the rate of interset::";
	cin>>r_rate;
}
void interset::print(){
cout<<" principle amount :: " << p_amount << endl<<" No of year :: " << n_year <<endl << " Rate of interset :: " << r_rate << endl;
	cout<<" simple interset :: " << si << endl << " total amount :: " << ta << endl;
}
void interset::cal(){
	si=((p_amount * n_year * r_rate ) / 100 );
	ta=p_amount+si;
}

int main(){
	interset obj1;
	obj1.set();
	obj1.cal();
	cout<<" after finding interset:: "<<endl;
	obj1.print();
}


