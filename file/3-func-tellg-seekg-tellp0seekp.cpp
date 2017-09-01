#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream ina("data.txt");
	ina.seekg(+10,ios::beg);
	long int x= ina.tellg();
	cout<<x<<endl;
	char ch=ina.get();
	cout<<ch<<endl;


	ina.seekg(-10,ios::cur);
	x= ina.tellg();
	cout<<x<<endl;
	ch=ina.get();
	cout<<ch<<endl;


	ofstream ouu("data.txt",ios::in|ios::out);

	ouu.seekp(+10,ios::beg);
	x= ouu.tellp();
	cout<<x<<endl;
	ch='K';
	ouu.put(ch);
	ouu.put(ch);
	ouu.put(ch);
	ouu.put(ch);
	ouu.put(ch);
	cout<<ch<<endl;


}
