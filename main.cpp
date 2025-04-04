#include <iostream>
using namespace std;

int suma(int a, int b){
    return a+b;
}

// clang++ -o main main.cpp
void main(){
    cout << "Hello world!" << endl;
    int x = 5, y = 10, z;
    z = suma(x, y);
    cout << "z=" << z << endl;
}