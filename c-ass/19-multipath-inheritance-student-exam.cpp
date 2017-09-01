#include<iostream>
using namespace std;
class student{
	char name[100];
	int age;
	public:
	student(){
		cout<<"CC"<<endl;
		cout<<" enter student name: ";
		cin>> name;
		cout<<"enter age: ";
		cin>> age;
	}
	void display_q(){
	cout<< "student  Name : " << name << " age : " << age<< endl;
	}	
	~student(){cout<<"DD"<<endl;}
};
class i_exam: virtual protected student{
	char sub[4][100];
	double marks[4];
	public:
	i_exam(){
		cout<<"CC-1_internal exam detail"<<endl;
		for(int i=0;i<4;i++){
			cout<<" enter subject name:";
			cin>> sub[i];
			cout<<" enter the marks:";
			cin>> marks[i];
		}
	}
	void Display(){
		cout<<"Internal_marks"<<endl;
		for(int i=0;i<4 ;i++)
		cout << "subject["<<i<<"] "<< sub[i] << "marks[" <<i << "] "<< marks[i]<< endl;
	} 
	double sub_i_total(){
		return (100*4);
	}
	double total_i(){
		double temp=0;
		for(int i=0;i<4;i++)
			temp = temp + marks[i];
		return temp;
	}
	~i_exam(){cout<<"DD-1"<<endl;}
};
class e_exam:virtual protected student{
	char sub[2][100];
	double marks[2];
	public:
	e_exam(){
		cout<<"CC-2_external_exam_detail"<<endl;
		for(int i=0;i<2;i++){
			cout<<" enter subject name:";
			cin>> sub[i];
			cout<<" enter the marks:";
			cin>> marks[i];
		}
	}
	double sub_e_total(){
		return (100*2);
	}
	double total_e(){
		double temp=0;
		for(int i=0;i<2;i++)
			temp = temp + marks[i];
		return temp;
	}
	void Display1(){
		cout<<"External_marks"<<endl;
		for(int i=0;i<2 ;i++)
		cout << "subject["<<i<<"] "<< sub[i] << "marks[" <<i << "] "<< marks[i]<< endl;
	} 
	~e_exam(){cout<<"DD-2"<<endl;}

};
class result: protected i_exam,protected e_exam{
	double t_marks,percentage,sub_total;
	public:
	void total(){
		t_marks = total_i() + total_e();
		sub_total = sub_i_total() + sub_e_total(); 
		percentage = (t_marks/sub_total)*100;
	}
	void display(){
		display_q();
		Display();
		Display1();
		cout << "total marks :: " << t_marks << " sub_total :: " << sub_total << " percentage :: " << percentage << endl;
	}	
	
};
int main(){
	result obj;
	obj.total();
	obj.display();
}
