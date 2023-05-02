#include "sources/Fraction.hpp"
#include "doctest.h"
#include <stdexcept>
#include "iostream"

using namespace std;
using namespace ariel;

TEST_CASE("Checking initilaization throws"){
    CHECK_NOTHROW(Fraction(1,0)); // in part b it will throw of course
    CHECK_NOTHROW(Fraction(0,1));
    CHECK_NOTHROW(Fraction(5.65)); // in part b i will add convertor so its ok
}

TEST_CASE("Operators functionality"){
    Fraction frac_a(10,10); //easter egg for Messi
    Fraction frac_b(9,9); //easter egg for Deni Avdija
    Fraction part_a(1,1); // for clean code for part a only

    CHECK((frac_a + frac_b) == part_a);
    CHECK((frac_a - frac_b) == part_a);
    CHECK((frac_a * frac_b) == part_a);
    CHECK((frac_a / frac_b) == part_a);
    CHECK((frac_a >= frac_b) == true);
    CHECK((frac_b <= frac_a) == true);
    CHECK((frac_a > frac_b) == true);
    CHECK((frac_b < frac_a) == true);

    CHECK((frac_a + 5) == part_a);
    CHECK((frac_a - 5) == part_a);
    CHECK((frac_a * 5) == part_a);
    CHECK((frac_a / 5) == part_a);
    
    CHECK((5+ frac_b) == part_a);
    CHECK((5 - frac_b) == part_a);
    CHECK((5 * frac_b) == part_a);
    CHECK((5 / frac_b) == part_a);

    CHECK((frac_a + 10) == part_a);
    CHECK((frac_a - 10) == part_a);
    CHECK((frac_a * 10) == part_a);
    CHECK((frac_a / 10) == part_a);



}