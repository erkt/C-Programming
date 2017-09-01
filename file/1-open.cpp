#include<iostream>
#include<fstream>
using namespace std;
struct st{
int n;
char ch;
}v;


int main(){
char ch='A';
int n=100;
/*ofstream fout ("data.txt");
fout << ch << n<<endl;

ifstream  fin("data.txt");
fin>>ch>>n;
cout<<"ch"<<ch<< "  "<<"n"<<n<<endl;
*/
v.n=900;
v.ch='H';

static  ofstream kt;
kt.open("data.txt");

kt<<"krt";



}
