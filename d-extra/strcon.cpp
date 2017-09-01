#include<iostream>
#include<cstring>
#include<malloc.h>
using namespace std;
class A{
	char p[900];
	public:
	A(){}
	A(char *q){
		int i;
		bzero(p,sizeof(p));
		for(i=0;q[i];i++)p[i]=q[i];
		p[i]='\0';
	}
	void pi(){
		cout<<p<<endl;
	}
	A* operator +(A &b){
		int i,j;
		for(i=0;p[i];i++);
		for(j=0;b.p[j];j++,i++)
			p[i]=b.p[j];
		return this;	
	}
};
int main(){
	A a("ff"),b("ghjdsg"),d("Kitli");
	A *c=new A;
	b.pi();
	a.pi();
	d.pi();
	c=a+b+d;
	c->pi();
	b.pi();
	a.pi();
	d.pi();

}
