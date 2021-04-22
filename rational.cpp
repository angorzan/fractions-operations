#include "rational.h"
#include <cmath>

Rational::Rational(int numerator, int denominator){
    this->numer = numerator;
    this->denom = denominator;
}

//uzupełnic implementację konstruktora kopiującego
Rational::Rational(const Rational& copy){
    numer = copy.numer;
    denom = copy.denom;
}

Rational operator+(const Rational& r, int i){
    //dopisać ciało fumkcji np. 1/3 + 5
    Rational result(r.numer+i*r.denom,r.denom);
    return result;
}

Rational operator+(int i, const Rational& r){
    //dopisać ciało fumkcji np. 5 + 1/3
    Rational result(i*r.denom,r.denom);
    return result;
}

Rational operator-(const Rational& r, int i);
Rational operator-(int i, const Rational& r);

Rational operator*(const Rational& r, int i);
Rational operator*(int i, const Rational& r);

Rational operator/(const Rational& r, int i);
Rational operator/(int i, const Rational& r);


