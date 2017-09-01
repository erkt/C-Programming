#include<iostream>
using namespace std;
class B{
	public: int x;
	protected : int y;
	private :  int z;
	public:
		   void set_z(int z11){
			   z=z11;
		   }
		   int get_z(){
			   return z;
		   }
};
class D:B{
	int z1;
	public:
	void set(int x1,int y1,int z3,int z2){
		x=x1;y=y1;z1=z2;
		set_z(z3);
	}
	void print(){
		cout<< "x: "<<x<<"  y: "<<y<<"  B->z: "<<get_z()<<" D->z: "<<z1<<endl;
	}
};
int main(){
	D ob;
	ob.set(100,200,300,400);
	ob.print();
}

