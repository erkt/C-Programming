#include<iostream>
using namespace std;
namespace first{
int x=19;
namespace second{
int y=20;
namespace third{
int z=30;
}
}
};

int main(){
namespace alias= first::second::third;
cout<<"x::"<<first::x<<endl<<"y::"<<first::second::y<<endl<<"z::"<<alias::z<<endl;
}

