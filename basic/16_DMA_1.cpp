#include<iostream>
using namespace std;
int main(){
int *i=new int;
cout<<"before::"<<*i<<endl;
cin>>*i;
cout<<"After::"<<*i<<endl;
}

