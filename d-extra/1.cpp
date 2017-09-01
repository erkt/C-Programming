#include<iostream>
using namespace std;
int main(){
int a[5];


int *p=a;
int *&rp=p;
//int b[5];
cout<<"a  "<<(unsigned int )a<<endl;
cout<<"a+1   "<<(unsigned int )(a+1)<<endl;
cout<<"a+2   "<<(unsigned int )(a+2)<<endl;
cout<<"a+3   "<<(unsigned int )(a+3)<<endl;
cout<<"a+4   "<<(unsigned int )(a+4)<<endl;

cout<<endl<<endl;
cout<<"b  "<<(unsigned int )b<<endl;
cout<<"b+1   "<<(unsigned int )(b+1)<<endl;
cout<<"b+2   "<<(unsigned int )(b+2)<<endl;
cout<<"b+3   "<<(unsigned int )(b+3)<<endl;
cout<<"b+4   "<<(unsigned int )(b+4)<<endl;
cout<<endl<<endl;
cout<<"p  "<<(unsigned int )p<<endl;
cout<<"p+1   "<<(unsigned int )(p+1)<<endl;
cout<<"p+2   "<<(unsigned int )(p+2)<<endl;
cout<<"p+3   "<<(unsigned int )(p+3)<<endl;
cout<<"p+4   "<<(unsigned int )(p+4)<<endl;
cout<<endl<<endl;
cout<<"rp  "<<(unsigned int )rp<<endl;
cout<<"rp+1   "<<(unsigned int )(rp+1)<<endl;
cout<<"rp+2   "<<(unsigned int )(rp+2)<<endl;
cout<<"rp+3   "<<(unsigned int )(rp+3)<<endl;
cout<<"rp+4   "<<(unsigned int )(rp+4)<<endl;
cout<<endl<<endl;
cout<<"&a    "<<(unsigned int )&a<<endl;
cout<<"&a+1  "<<(unsigned int )(&a+1)<<endl;
cout<<"&a+2  "<<(unsigned int )(&a+2)<<endl;
cout<<"&a+3 "<<(unsigned int )(&a+3)<<endl;
cout<<"&a+4  "<<(unsigned int )(&a+4)<<endl;
cout<<endl<<endl;
cout<<"&p    "<<(unsigned int )&p<<endl;
cout<<"&p+1  "<<(unsigned int )(&p+1)<<endl;
cout<<"&p+2  "<<(unsigned int )(&p+2)<<endl;
cout<<"&p+3 "<<(unsigned int )(&p+3)<<endl;
cout<<"&p+4  "<<(unsigned int )(&p+4)<<endl;
cout<<endl<<endl;

cout<<"&rp    "<<(unsigned int )&rp<<endl;
cout<<"&rp+1  "<<(unsigned int )(&rp+1)<<endl;
cout<<"&rp+2  "<<(unsigned int )(&rp+2)<<endl;
cout<<"&rp+3 "<<(unsigned int )(&rp+3)<<endl;
cout<<"&rp+4  "<<(unsigned int )(&rp+4)<<endl;







}
