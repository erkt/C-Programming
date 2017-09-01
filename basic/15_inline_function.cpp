#include<iostream>
using namespace std;
void function(int x){
if(x==1)
cout<<"------------------"<<endl;
else
cout<<"''''''''''''''''''"<<endl;
}

int main(){
int i;
cout<<"Data::";
cin>>i;
function(i);
cout<<"Done..!!"<<endl;
}
