//9) Write a C++ program to sort the given five names from the keyboard and print it in the sorted order. (Use C++'s DMA).
#include<iostream>
#include<string.h>
using namespace std;
int main(){
int n;
cout << " enter you want to how many name ?? " ;
cin >> n; 
char **p;

p = new char*[n];
for ( int i = 0; i < n ; i++)
p[i] = new char[100];

for ( int i=0;i<n;i++)
cin >> p[i];
//getline(cin,p[i]);

cout <<  "Before sorting :: " << endl;
for (int i=0;i<n;i++)
cout << " Data :: " << p[i] << endl;

for (int i=0;i<n-1;i++)
for(int j=0;j<n-i-1;j++)
if((strcmp(p[j],p[j+1]))>0){
//string str;//=p[j];
char str[1000];
strcpy(str,p[j]);
strcpy(p[j],p[j+1]);
strcpy(p[j+1],str);
}
cout <<  "after sorting :: " << endl;
for (int i=0;i<n;i++)
cout << " Data :: " << p[i] << endl;

}
    
