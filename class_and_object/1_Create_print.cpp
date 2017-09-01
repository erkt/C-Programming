#include<iostream>
using namespace std;
struct s{
int i,j; //default all member are public...
};

class a{
int j,k,l;////default all member are private...
};

int main(){
cout<<"sizeof struct s:"<<sizeof(s)<<endl;
cout<<"sizeof struct a:"<<sizeof(a)<<endl;
}
