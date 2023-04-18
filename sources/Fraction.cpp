#include "Fraction.hpp"
#include <iostream>
using namespace std;

Fraction::Fraction(int t, int b){
    _t=t;
    _b=b;
}

//overload the operator <<. 
std::ostream& operator<<(std::ostream &s, const Fraction &fraction){
    return s << fraction._t << std::endl << "___" << std::endl << fraction._b << std::endl;
}