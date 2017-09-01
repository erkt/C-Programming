#include<iostream>
using namespace std;
int main(){
int j;
cout<<"how many array element..";
cin>>j;

int *p=new int[j];
for(int i=0;i<j;i++)
cin>>p[i];

for(int i=0;i<j;i++)
cout<<"["<<p[i]<<"]  ";

cout<<"Done..!!!"<<endl;
}

