#pragma once
#include <iostream>
#include <stdio.h>

namespace ariel{
    class Fraction
    {
    private:
        int _t; // top
        int _b; // bottom

    public:

        Fraction(int t, int b);
        Fraction(float num);

        // void advance();
        // void backdown();
        // int gcd();//returns the greatest common divisor
        // void reduse();//redused form


        //overload the operator + for 2 fractions. 
        Fraction operator+(const Fraction &frac2);
        //overload the operator - for 2 fractions. 
        Fraction operator-(const Fraction &frac2);
        //overload the operator * for 2 fractions. 
        Fraction operator*(const Fraction &frac2);
        //overload the operator / for 2 fractions. 
        Fraction operator/(const Fraction &frac2);
        //overload the operator == for 2 fractions. 
        bool operator==(const Fraction &frac2);
        //overload the operator > for 2 fractions. 
        bool operator>(const Fraction &frac2);
        //overload the operator < for 2 fractions. 
        bool operator<(const Fraction &frac2);
        //overload the operator >= for 2 fractions. 
        bool operator>=(const Fraction &frac2);
        //overload the operator <= for 2 fractions. 
        bool operator<=(const Fraction &frac2);



        //overload the operator + for fraction and float. 
        Fraction operator+(const float num);
        //overload the operator - for fraction and float. 
        Fraction operator-(const float num);
        //overload the operator * for fraction and float. 
        Fraction operator*(const float num);
        //overload the operator / for fraction and float. 
        Fraction operator/(const float num);
        //overload the operator == for fraction and float.
        bool operator==(const float num);
        //overload the operator > for fraction and float.
        bool operator>(const float num);
        //overload the operator < for fraction and float. 
        bool operator<(const float num);
        //overload the operator >= for fraction and float. 
        bool operator>=(const float num);
        //overload the operator <= for fraction and float. 
        bool operator<=(const float num);



        //overload the operator + for float and fraction. 
        friend Fraction& operator+(const float num,Fraction &frac1);
        //overload the operator - for float and fraction. 
        friend Fraction& operator-(const float num,Fraction &frac1);
        //overload the operator * float and fraction. 
        friend Fraction& operator*(const float num,Fraction &frac1);
        //overload the operator / float and fraction. 
        friend Fraction& operator/(const float num,Fraction &frac1);
        //overload the operator == float and fraction. 
        friend bool operator==(const float num,Fraction &frac1);
        //overload the operator > float and fraction. 
        friend bool operator>(const float num,Fraction &frac1);
        //overload the operator < float and fraction. 
        friend bool operator<(const float num,Fraction &frac1);
        //overload the operator >= float and fraction. 
        friend bool operator>=(const float num,Fraction &frac1);
        //overload the operator <= float and fraction. 
        friend bool operator<=(const float num,Fraction &frac1);
        
        //overload the operator prefix ++. 
        Fraction &operator++();
        //overload the operator prefix --. 
        Fraction &operator--();
        //overload the operator postfix ++. 
        const Fraction operator++(int);
        //overload the operator postfix --. 
        const Fraction operator--(int);

        //overload the operator << for fraction. 
        friend std::ostream& operator<<(std::ostream &os, const Fraction &fraction);
        //overload the operator >>. 
        friend std::istream& operator>>(std::istream &is, Fraction &fraction);


    };
}   


