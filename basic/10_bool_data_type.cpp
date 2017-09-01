#include<iostream>
using namespace std;
bool accept();
int main(){
bool status;
status =accept();
if(status==true)
cout<<"true"<<endl;
if(status==false)
cout<<"false"<<endl;
}
bool accept(){
char an;
cin>>an;
if(an=='y')
return true;
else
return false;
}

