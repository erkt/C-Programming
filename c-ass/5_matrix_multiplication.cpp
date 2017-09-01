#include<iostream>
using namespace std;
int main(){
	int **p,r,c,k=0,r1,c1,**q;
	cout<<"Enter Row-1::";
	cin>>r;
	cout<<"Enter Coloum-1::";
	cin>>c;

	p=new int*[r];
	for(int i=0;i<r;i++)
		p[i]=new int[c];

	cout<<"Enter Row-2::";
	cin>>r1;
	cout<<"Enter Coloum-2::";
	cin>>c1;

	q=new int*[r1];
	for(int i=0;i<r1;i++)
		q[i]=new int[c1];

	cout<<"Memory created..."<<endl;

	if(c!=r1){
		cout<<"Create a valid matrix for multiplication..."<<endl;
	}
	else{

		int nr,nc;
		nr=r;nc=c1;

		int **s;
		s=new int*[nr];
		for (int i=0;i<nr;i++)
			s[i]=new int[nc];
		cout<<"Enter Matrix-1 "<<r<<" X "<<c<< " Value "<<endl;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cin>>p[i][j];
		cout<<"Enter Matrix-2 "<<r1<<" X "<<c1<< " Value "<<endl;
		for(int i=0;i<r1;i++)
			for(int j=0;j<c1;j++)
				cin>>q[i][j];
		for(int k=0,sum;k<nr;k++){
			for(int j=0;j<nc;j++){
				sum=0;
				for(int b=0;b<r1;b++){
					sum=sum+(p[k][b]*q[b][j]);
				}
				s[k][j]=sum;
			}
		}
		cout<<"MATRIX-1::\t\tMATRIX-2::\t\tMULTIPLICATION MATRIX::"<<endl;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				cout<<"["<<p[i][j]<<"] ";
			cout << "\t\t " ;
			if(i<r1){
				for(int j=0;j<c1;j++)
					cout<<"["<<q[i][j]<<"] ";
				cout<<"\t\t ";
				for(int j=0;j<nc;j++)	
					cout<<"["<<s[i][j]<<"] ";
			}
			cout<<endl;
		}
	}
}




