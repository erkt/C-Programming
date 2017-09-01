#include<iostream>
#include<fstream>
using namespace std;
int main (){

char ch='n';
int m=299;

fstream oyt("data.txt",ios::out);
oyt.write((char*)&ch,sizeof(ch));
oyt.write((char*)&m,sizeof(m));
fstream intt("data.txt",ios::in);
intt.read((char *)&ch,sizeof(ch));
intt.read((char *)&m,sizeof(m));
cout<<(ch= ch+1)<< "and" << m+1<< endl;
}
