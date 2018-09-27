#include <iostream>
using namespace std;

int main(){
int a,b;
a=7;
b=1;

cout<< "a="<<a<<endl;
cout<< "b="<<b<<endl;

a= a xor b;
b= a xor b;
a= a xor b;

cout<< "a="<<a<<endl;
cout<< "b="<<b<<endl;

}
