#include<iostream>
using namespace std;
template<class t,class t1>
void sort(t *p,t1 n){
	for(int i =0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(p[j]>p[j+1])
				p[j+1]=p[j]+p[j+1]-(p[j]=p[j+1]);
}
int main()
{
	int n;
	cout<<"enter the number :: ";
	cin>>n;
	
	int a[n];
	cout<<"enter the integer array:"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;

	char s[n];
	cout<<"enter the charcter array:"<<endl;
	for(int i=0;i<n;i++)
	cin>>s[i];
	sort(s,n);
	for(int i=0;i<n;i++)
	cout<<s[i]<<" ";
	cout<<endl;

	float f[n];
	cout<<"enter the float array:"<<endl;
	for(int i=0;i<n;i++)
	cin>>f[i];
	sort(f,n);
	for(int i=0;i<n;i++)
	cout<<f[i]<<" ";
	cout<<endl;
}
