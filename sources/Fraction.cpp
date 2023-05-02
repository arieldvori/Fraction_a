#include "Fraction.hpp"
#include <iostream>
#include <stdio.h>

using namespace ariel;

    // int Fraction::gcd(){
    //     //wating for part b
    // }


    // void Fraction::reduse(){
    //     //waiting for part b
    // }

    // void Fraction::advance(){
    //     // _t+=_b; ***good but for part b
    //     // reduse();
    // }

    // void Fraction::backdown(){ 
    //     // _t-=_b; ***good but for part b
    //     // reduse();
    // }

    Fraction::Fraction(int top, int bottom)
    :_t(top), _b(bottom)
    {
    }

    Fraction::Fraction(float num)
    :_t(1), _b(1)//in part b i will add fuction to convert float to fraction
    {
    }
    
       

    //overload the operator + for 2 fractions. 
    Fraction Fraction::operator+(const Fraction &frac2){
        return Fraction(1,1);
    }
    //overload the operator - for 2 fractions. 
    Fraction Fraction::operator-(const Fraction &frac2){
        return Fraction(1,1);
    }
    //overload the operator * for 2 fractions. 
    Fraction Fraction::operator*(const Fraction &frac2){
        return Fraction(1,1);
    }
    //overload the operator / for 2 fractions. 
    Fraction Fraction::operator/(const Fraction &frac2){
        return Fraction(1,1);
    }
    //overload the operator == for 2 fractions. 
    bool Fraction::operator==(const Fraction &frac2){
        return true;
    }
    //overload the operator > for 2 fractions. 
    bool Fraction::operator>(const Fraction &frac2){
        return true;
    }
    //overload the operator < for 2 fractions. 
    bool Fraction::operator<(const Fraction &frac2){
        return true;
    }
    //overload the operator >= for 2 fractions. 
    bool Fraction::operator>=(const Fraction &frac2){
        return true;
    }
    //overload the operator <= for 2 fractions. 
    bool Fraction::operator<=(const Fraction &frac2){
        return true;
    }



    //overload the operator + for fraction and float. 
    Fraction Fraction::operator+(const float num){
        return Fraction(1,1);
    }
    //overload the operator - for fraction and float. 
    Fraction Fraction::operator-(const float num){
        return Fraction(1,1);
    }
    //overload the operator * for fraction and float. 
    Fraction Fraction::operator*(const float num){
        return Fraction(1,1);
    }
    //overload the operator / for fraction and float. 
    Fraction Fraction::operator/(const float num){
        return Fraction(1,1);
    }
    //overload the operator == for fraction and float.
    bool Fraction::operator==(const float num){
        return true;
    }
    //overload the operator > for fraction and float.
    bool Fraction::operator>(const float num){
        return true;
    }
    //overload the operator < for fraction and float. 
    bool Fraction::operator<(const float num){
        return true;
    }
    //overload the operator >= for fraction and float. 
    bool Fraction::operator>=(const float num){
        return true;
    }
    //overload the operator <= for fraction and float. 
    bool Fraction::operator<=(const float num){
        return true;
    }



    //overload the operator + for float and fraction. 
    Fraction &ariel::operator+(const float num,Fraction &frac1){
        return frac1;
    }
    //overload the operator - for float and fraction. 
    Fraction &ariel::operator-(const float num,Fraction &frac1){
        return frac1;
    }
    //overload the operator * float and fraction. 
    Fraction &ariel::operator*(const float num,Fraction &frac1){
        return frac1;
    }
    //overload the operator / float and fraction. 
    Fraction &ariel::operator/(const float num,Fraction &frac1){
        return frac1;
    }
    //overload the operator == float and fraction. 
    bool ariel::operator==(const float num,Fraction &frac1){
        return true;
    }
    //overload the operator > float and fraction. 
    bool ariel::operator>(const float num,Fraction &frac1){
        return true;
    }
    //overload the operator < float and fraction. 
    bool ariel::operator<(const float num,Fraction &frac1){
        return true;
    }
    //overload the operator >= float and fraction. 
    bool ariel::operator>=(const float num,Fraction &frac1){
        return true;
    }
    //overload the operator <= float and fraction. 
    bool ariel::operator<=(const float num,Fraction &frac1){
        return true;
    }
    
     //overload the operator prefix ++. 
    Fraction &Fraction::operator++(){
        // advance();
        // return *this;
        return *this;
    }
    //overload the operator prefix --. 
    Fraction &Fraction::operator--(){
        // backdown();
        // return *this;
        return *this;
    }
    //overload the operator postfix ++. 
    const Fraction Fraction::operator++(int){
        // Fraction f= *this;
        // advance();
        // return f;
        return Fraction(1,1);
    }
    //overload the operator postfix --. 
    const Fraction Fraction::operator--(int){
        // Fraction f= *this;
        // backdown();
        // return f;
        return Fraction(1,1);
    }

    //overload the operator << for fraction. 
    std::ostream &ariel::operator<<(std::ostream &os, const Fraction &fraction){
        os << fraction._t << "/" << fraction._b << std::endl;
        return os;
    }
    //overload the operator >>. 
    std::istream &ariel::operator>>(std::istream &is, Fraction &fraction){
        is >> fraction._t >> fraction._b;
        return is;
    }



    // //overload the operator + for 2 fractions. 
    // const Fraction operator+(const Fraction &f1,const Fraction &f2){
    //     // Fraction f((f1._t*f2._b)+(f2._t*f1._b),f1._b*f2._b);
    //     // f.reduse();
    //     // return f;
    //     Fraction part_a(1,1);
    //     return part_a;
    // }
    // //overload the operator + for fraction and float. 
    // const Fraction operator+(const Fraction &f1,const float num){
    //     // Fraction f(f1._t+(num*f1._b),f1._b);
    //     // return f;
    //     Fraction part_a(1,1);
    //     return part_a;
    // }

    // //overload the operator + for float and fraction. 
    // const Fraction operator+(const float num,const Fraction &f1){
    //     // Fraction f(f1._t+(num*f1._b),f1._b);
    //     // return f;
    //     Fraction part_a(1,1);
    //     return part_a;
    // }

    // //overload the operator + for fraction and int. 
    // const Fraction operator+(const Fraction &f1,const int num){
    //     // Fraction f(f1._t+(num*f1._b),f1._b);
    //     // return f;
    //     Fraction part_a(1,1);
    //     return part_a;
    // }

    // //overload the operator + for int and fraction. 
    // const Fraction operator+(const int num,const Fraction &f1){
    //     // Fraction f(f1._t+(num*f1._b),f1._b);
    //     // return f;
    //     Fraction part_a(1,1);
    //     return part_a;
    // }

    // //overload the operator - for 2 fractions. 
    // const Fraction operator-(const Fraction &f1,const Fraction &f2){
    //     // Fraction f((f1._t*f2._b)-(f2._t*f1._b),f1._b*f2._b);
    //     // f.reduse();
    //     // return f;
    //     Fraction part_a(1,1);
    //     return part_a;
    // }

    // //overload the operator - for float and fraction. 
    // const Fraction operator-(const float num,const Fraction &f1){
    //     Fraction f(f1._t-(num*f1._b),f1._b);
    //     f.reduse();
    //     return f;
    // }

    // //overload the operator - for fraction and float. 
    // const Fraction operator-(const Fraction &f1,const float num){
    //     Fraction f(f1._t-(num*f1._b),f1._b);
    //     f.reduse();
    //     return f;
    // }

    // //overload the operator - for int and fraction. 
    // const Fraction operator-(const int num,const Fraction &f1){
    //     Fraction f(f1._t-(num*f1._b),f1._b);
    //     f.reduse();
    //     return f;
    // }

    // //overload the operator - for fraction and int. 
    // const Fraction operator-(const Fraction &f1,const int num){
    //     Fraction f(f1._t-(num*f1._b),f1._b);
    //     f.reduse();
    //     return f;
    // }


    // //overload the operator * for 2 fractions.. 
    // const Fraction operator*(const Fraction &f1,const Fraction &f2){
    //     Fraction f(f1._t*f2._t,f1._b*f2._b);
    //     f.reduse();
    //     return f;
    // }

    // //overload the operator * for fraction and int. 
    // const Fraction operator*(const Fraction &f1,const int num){
    //     Fraction f(f1._t*num,f1._b);
    //     return f;
    // }

    // //overload the operator * for fraction and float. 
    // const Fraction operator*(const Fraction &f1,const float num){
    //     Fraction f(f1._t*num,f1._b*1.0);
    //     return f;
    // }

    // // //overload the operator * for int and fraction. 
    // // const Fraction operator*(int num,const Fraction &f1){
    // //     Fraction f(f1._t*num,f1._b);
    // //     return f;
    // // }

    // //overload the operator * for float and fraction. 
    // const Fraction operator*(const double num,const Fraction &f1){
    //     Fraction f(f1._t*num,f1._b*1.0);
    //     return f;
    // }

    // //overload the operator /. 
    // const Fraction operator/(const Fraction &f1,const Fraction &f2){
    //     Fraction f(f1._t*f2._b,f1._b*f2._t);
    //     f.reduse();
    //     return f;
    // }

    // //overload the operator ==. 
    // bool operator==(const Fraction &f1,const Fraction &f2){
    //     if(f1._t==f2._t&&f1._b==f2._b){return true;}
    //     else{return false;}
    // }

    // //overload the operator >. 
    // bool operator>(const Fraction &f1,const Fraction &f2){
    //     if(f1._t/f1._b>f2._t/f2._b&&f1._t%f1._b>f2._t%f2._b){return true;}
    //     else{return false;}
    // }

    // //overload the operator <. 
    // bool operator<(const Fraction &f1,const Fraction &f2){
    //     if(f1._t/f1._b<f2._t/f2._b&&f1._t%f1._b<f2._t%f2._b){return true;}
    //     else{return false;}
    // }

    // //overload the operator >=. 
    // bool operator>=(const Fraction &f1,const Fraction &f2){
    //     if(f1._t/f1._b>=f2._t/f2._b&&f1._t%f1._b>=f2._t%f2._b){return true;}
    //     else{return false;}
    // }

    // //overload the operator <=. 
    // bool operator<=(const Fraction &f1,const Fraction &f2){
    //     if(f1._t/f1._b<=f2._t/f2._b&&f1._t%f1._b<=f2._t%f2._b){return true;}
    //     else{return false;}
    // }

   




