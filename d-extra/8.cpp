#include<iostream>
class test{
public:
int a;
test(){
a=10;
std::cout<<"con\n";
}
~test(){
std::cout<<"dest\n";
}
};
static test obj;
main(){
std::cout<<"main() starts\n";
std::cout<<obj.a;
std::cout<<"\nmain() terminate\n";
return 0;
}
