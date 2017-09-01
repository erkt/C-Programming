#include<iostream>
using namespace std;
template <class t>
class A{
	t a[5];
	int count;
	public:
	void push(t);
	void pop(void);
	void stack();
	void print();
};
template <class t>
void A<t>::stack(){
	int op;
	t num;
	count=-1;
	while(1){
		cout<<"Enter Option 1)PUSH 2)POP 3)Print 4)Exit.."<<endl;
		cin>>op;
		if(op==1){
	
			if(count > 5){
				throw "Stack OverFlow";
			}
		
			else{
				cout<<"enter the data :: ";
				cin>>num;
				push(num);
			}
		}
		else if(op==2){
			if(count <= -1){
				throw "Stack UnderFlow";
			}
			else{
				pop();
			}
		}
		else if(op==3){
			print();
		}
		else if(op==4){
			break;
		}
		else{
			cout <<" select proper option.."<<endl;
		}
	}

}
template <class t>
void A<t>::push(t da){
a[++count]=da;		
}
template <class t>
void A<t>::pop(void){
cout<<a[count--]<<" Data will be poped. "<<endl;
}
template <class t>
void A<t>::print(void){
	if(count <= -1){
		cout<<"Stack is empty.."<<endl;
	}
	else {
		for ( int l=0;l<=count;l++)
			cout<< a[l]<<" " ;
		cout<<endl;
	}
}
int main(){
	int option;
	while(1){
		cout<<"Enter for select 1)integer 2)character 3)float 4)Exit.."<<endl;
		cin>>option;
		if(option==1){
			cout<<"you selected integer stack.."<<endl;
			A<int> obj;
			try{
			obj.stack();
			}
			catch(const char * p){
			cout<<p<<endl;
			obj.stack();
			}
			
		}
		else if(option==2){
			cout<<"you selected character stack.."<<endl;
			try{
			A<char> obj;
			obj.stack();
			}
			catch(const char *p){
			cout<<p<<endl;
			}
		}
		else if(option==3){
			cout<<"you selected float stack.."<<endl;
			try{
			A<float> obj;
			obj.stack();
			}
			catch(const char *p){
			cout<<p<<endl;
			}
		}
		else if(option==4){
			break;
		}
		else 
			cout<<"Select proper option"<<endl;
		}
}
