#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int a[5];
int (&ra)[5]=a;
for(int i=0;i<5;i++)
cin>>a[i];

for(int i=0;i<5;i++)
cout <<"a:["<<i<<"]:"<<ra[i]<<endl;

cout<<"a::"<<a<<"  ra::"<<ra<<endl;
cout<<"a+1::"<<a+1<<"  ra+1::"<<ra+1<<endl;
cout<<"&a+1::"<<&a+1<<"  &ra+1::"<<&ra+1<<endl;
cout<<"Done!!!"<<endl;
}
