class Array{
public:
int size() const;
float&operator[](int index);
};
int main(){
Array a;
for (int i = 0;i<a.size();++i)a[i]=7;
//This line invokes Array::operator[](int) ...
}
