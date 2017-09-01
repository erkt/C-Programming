/*21) Consider a example of declaring the examination result. Design three classes: student, exam 	and result. The student class has data members such as those representing roll 	number,name etc. Create the class exam by inheriting the student class. The exam class 	adds data members representing the marks scored in six subjects. Derive the result from the 	exam class and it has its own data members such as total_marks. Write an interactive 	program to model this relationship. What type of inheritance this model belongs to ?*/
#include<iostream>
using namespace std;
class stu{
	int r;
	public:
	stu():r(900){}
	void print(){
		cout<< "Rollnumber"<<r<<endl;
	}

};
class ex:public stu{
	float ma[6];
	public:
	void set(){
		for(int i=0;i<6;i++)
			cin>>ma[i];
	}
	double cl(){
		double t_m;
		for(int i=0,t_m=0;i<6;i++)
			t_m=t_m+ma[i];
		return t_m;
	}
	void prin(){
		print();
		for(int i=0;i<6;i++)
			cout<<ma[i]<<"  ";
	}
};
class re:public ex{
	double t_m;
	public:
	re(){
		set();
	}
	void pr(){
		prin();
		cout<<"toma"<<cl()<<endl;
	}
};
int main(){
	re obj;
	obj.pr();
}
