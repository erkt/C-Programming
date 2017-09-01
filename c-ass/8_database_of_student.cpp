#include<iostream>
#include<string.h>
using namespace std;
int j;
class student{
	private:
		int r_number;
		float marks;
		char name[100];
		//string str;
	public:
		void set();
		void display();
		void sort(student *);
};

void student::set(){
	cout<<" enter the roll number::";
	cin>> r_number;
	cout<<" enter the name of the student::";
	cin>>name;
	//getline(cin,str);
	cout<<" enter the marks::";
	cin>> marks;
}
void student::display(){
	cout<<r_number<<"\t"<<name<<"\t"<<marks<<endl;
	//cout<<r_number<<"\t"<<str<<"\t"<<marks<<endl;
}
void student::sort(student  *a){
	student dummy;
	int num;
	cout<<"Choose option for sorting acording :: 1) roll number 2)name 3) marks.."<< endl;
	cin>>num;
	switch(num){
		case 1: 
			for (int i=0;i<j-1;i++){
				for(int k=0;k<j-1-i;k++){
					if(a[k].r_number > a[k+1].r_number){
						dummy=a[k];
						a[k]=a[k+1];
						a[k+1]=dummy;
					}
				}
			}
			break;
		case 2:
			for(int i=0;i<j-1;i++){
				for(int k=0;k<j-i-1;k++){
					if((strcmp(a[k].name,a[k+1].name))>0){
						dummy=a[k];
						a[k]=a[k+1];
						a[k+1]=dummy;
					}
				}
			}
			break;
		case 3:
			for(int i=0;i<j-1;i++){
				for(int k=0;k<j-i-1;k++){
					if(a[k].marks > a[k+1].marks){
						dummy=a[k];
						a[k]=a[k+1];
						a[k+1]=dummy;
					}
				}
			}
			break;
		default:
			cout<<"Enter proper option..."<<endl;
			break;
	}
}


int main(){
	cout<<" enter the no of student you want to add detail.."<<endl;
	cin>>j;
	student data[j];
	for(int i=0; i<j ; i++ )
		data[i].set();
	cout<<"before...sorting.."<<endl;
	cout<<"R.No....\tName....\tMarks...."<<endl;
	for(int i=0; i<j ; i++)
		data[i].display();

	data[0].sort(data);
	cout<<"after...sorting.."<<endl;
	for(int i=0; i<j ; i++)
		data[i].display();


}

