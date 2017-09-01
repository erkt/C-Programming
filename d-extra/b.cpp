#include<iostream>
using namespace std;
class B1{
	string name;
	float amount;
	int acc;
	public:
	void enter (){
		getline(cin,name);
		cin>>amount;
		cin>>acc;
	}
	void display(){
		cout<<amount<<"   "<<acc<<"   "<<name<<endl;
	}
};
int main(){
	B1 obj;
	obj.enter();
	obj.display();
}


/*
#include<iostream>
using namespace std;
int main(){
string name;
getline(cin,name);
cout<<name<<endl;
}*/
