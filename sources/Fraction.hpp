#pragma once
#include <iostream>
namespace ariel
{
    class Fraction
    {
    public:
        int _t; // top
        int _b; // botton
        float float_t; // top
        float float_b; // botton
        Fraction(int t, int b);
        Fraction(float t, float b);
        int gcd(int a, int b);//returns the greatest common divisor
        void reduse();//returns redused form
    };

    //overload the operator + for 2 fractions. 
    Fraction operator+(const ariel::Fraction &f1,const ariel::Fraction &f2){
        Fraction f(f1._t+f2._t,f1._b+f2._b);
        f.reduse();
        return f;
    }
    //overload the operator + for float and fraction. 
    Fraction operator+(const float num,const ariel::Fraction &f1){
        Fraction f(f1._t+(num*f1._b),f1._b);
        return f;
    }

    //overload the operator -. 
    Fraction operator-(const ariel::Fraction &f1,const ariel::Fraction &f2){
        Fraction f(f1._t-f2._t,f1._b-f2._b);
        f.reduse();
        return f;
    }

    //overload the operator * for 2 fractions.. 
    Fraction operator*(const ariel::Fraction &f1,const ariel::Fraction &f2){
        Fraction f(f1._t*f2._t,f1._b*f2._b);
        f.reduse();
        return f;
    }

    // //overload the operator * for fraction and int. 
    // Fraction operator*(const ariel::Fraction &f1,const int num){
    //     Fraction f(f1._t*num,f1._b);
    //     return f;
    // }

    //overload the operator * for fraction and float. 
    Fraction operator*(const ariel::Fraction &f1,const float num){
        Fraction f(f1._t*num,f1._b*1.0);
        return f;
    }

    // //overload the operator * for int and fraction. 
    // Fraction operator*(int num,const ariel::Fraction &f1){
    //     Fraction f(f1._t*num,f1._b);
    //     return f;
    // }

    //overload the operator * for float and fraction. 
    Fraction operator*(const float num,const ariel::Fraction &f1){
        Fraction f(f1._t*num,f1._b*1.0);
        return f;
    }

    //overload the operator /. 
    Fraction operator/(const ariel::Fraction &f1,const ariel::Fraction &f2){
        Fraction f(f1._t*f2._b,f1._b*f2._t);
        f.reduse();
        return f;
    }

    //overload the operator ==. 
    bool operator==(const ariel::Fraction &f1,const ariel::Fraction &f2){
        if(f1._t==f2._t&&f1._b==f2._b){return true;}
        else{return false;}
    }

    //overload the operator >. 
    bool operator>(const ariel::Fraction &f1,const ariel::Fraction &f2){
        if(f1._t/f1._b>f2._t/f2._b&&f1._t%f1._b>f2._t%f2._b){return true;}
        else{return false;}
    }

    //overload the operator <. 
    bool operator<(const ariel::Fraction &f1,const ariel::Fraction &f2){
        if(f1._t/f1._b<f2._t/f2._b&&f1._t%f1._b<f2._t%f2._b){return true;}
        else{return false;}
    }

    //overload the operator >=. 
    bool operator>=(const ariel::Fraction &f1,const ariel::Fraction &f2){
        if(f1._t/f1._b>=f2._t/f2._b&&f1._t%f1._b>=f2._t%f2._b){return true;}
        else{return false;}
    }

    //overload the operator <=. 
    bool operator<=(const ariel::Fraction &f1,const ariel::Fraction &f2){
        if(f1._t/f1._b<=f2._t/f2._b&&f1._t%f1._b<=f2._t%f2._b){return true;}
        else{return false;}
    }


    //overload the operator <<. 
    std::ostream& operator<<(std::ostream &s, const ariel::Fraction &fraction){
        return s << fraction._t << "/" << fraction._b << std::endl;
    }

    //overload the operator >>. 
    std::istream& operator>>(std::istream &is, ariel::Fraction &fraction){
        is >> fraction._t >> fraction._b;
        return is;
    }





}
