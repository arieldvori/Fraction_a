#include "Fraction.hpp"
#include <iostream>
using namespace std;

ariel::Fraction::Fraction(int t, int b){
    _t=t;
    _b=b;
}

ariel::Fraction::Fraction(float t, float b){
    float_t=t;
    float_b=b;
}

int ariel::Fraction::gcd(int a, int b){
    while (b!=0){
        int temp = b;
        b = a % b;
        a=temp;
    }
    return a;
}
void ariel::Fraction::reduse(){
    int num = this->gcd(this->_t,this->_b);
    this->_t=this->_t/num;
    this->_b=this->_b/num;
}




