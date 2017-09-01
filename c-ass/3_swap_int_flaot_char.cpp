#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void swp(int &x,int &y){
	int temp=x;x=y,y=temp;
}
void swp(float &x,float &y){
	float temp=x;x=y;y=temp;
}
void swp(char &x,char &y){
	char temp=x;x=y;y=temp;
}

int main(){
	int n,n1;
	float f,f1;
	char c,c1;
	cout<<"enter the number in intger value n::";
	cin>>n;
	cout<<"n1::";
	cin>>n1;
	cout<<"enter the floating value f::";
	cin>>f;
	cout<<"f1::";
	cin>>f1;
	cout<<"enter the character c::";
	cin>>c;
	cout<<"c1::";
	cin>>c1;
	cout<<"before swap::"<<" n::"<<n<<" n1::"<<n1<<endl;
	swp(n,n1);
	cout<<"After swap::"<<" n::"<<n<<" n1::"<<n1<<endl;
	cout<<"before swap::"<<" f::"<<f<<" f1::"<<f1<<endl;
	swp(f,f1);
	cout<<"After swap::"<<" f::"<<f<<" f1::"<<f1<<endl;
	cout<<"before swap::"<<" c::"<<c<<" c1::"<<c1<<endl;
	swp(c,c1);
	cout<<"after swap::"<<" c::"<<c<<" c1::"<<c1<<endl;
}



