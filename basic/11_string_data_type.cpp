#include<iostream>
using namespace std;

int main(){
string str;
//cin>>str;
str ="vector";
cout<<"string::"<<str<<endl;
cout<<"sizeof str :: "<< sizeof(str)<<endl;
string s1,s2;
cin>>s1;
cin>>s2;
cout<<"s1:: "<<s1<<"\tSizeof(s1)  "<<sizeof(s1)<<endl;
cout<<"s2:: "<<s2<<"\tSizeof(s2)  "<<sizeof(s2)<<endl;
//cout<<"enter the string"<<endl;
//cin>>str;/////not including space
//cout<<"string::"<<str<<endl;

str = s1+ s2;
cout<<"string::"<<str<<endl;
cout<<"sizeof str :: "<< sizeof(str)<<endl;
//cout<<"enter the string"<<endl;
//getline(cin,str);////////including with space in string
//cout<<"string::"<<str<<endl;





}

