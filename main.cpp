#include<iostream>
#include "complex.h"
using namespace std;

int main(){
    cmplx a(1, 2);
    cmplx b(1, 1);
    cmplx c = add(a, b);
    cout<<"The value of c = ("<<c.x<<","<<c.y<<")\n";
}