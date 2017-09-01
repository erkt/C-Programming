#include<iostream>
using namespace std;
int main(){
int **p,row,coloum;
cout<<"enter row";
cin>>row;
cout<<"enter coloum";
cin>>coloum;

p=new int[row];
for(int i=0;i<row;i++)
p[i]=new int[coloum];

for(int i=0;i<row;i++){
for(int i=0;i<coloum;i++)
cout<<"["<<p[i][i]<<"] ";
cout<<endl;
}
}
