#include "rational.h"
#include <cmath>

Rational::Rational(int numerator, int denominator){
    this->numer = numerator;
    this->denom = denominator;
}

std::ostream& operator<<(std::ostream & o, const Rational & r){
    return o << r.numer << "/" << r.denom;
}

//uzupełnic implementację konstruktora kopiującego
Rational::Rational(const Rational& copy){
    this->numer = copy.numer;
    this->denom = copy.denom;
}

Rational operator+(const Rational& r, int i){
    //dopisać ciało funkcji np. 1/3 + 5

    Rational result(r.numer+i*r.denom,r.denom);
    return result;
}

Rational operator+(int i, const Rational& r){
    //dopisać ciało fumkcji np. 5 + 1/3
    Rational result(i*r.denom,r.denom);
    return result;
}

Rational Rational::operator+(const Rational& r) const {
    Rational result(r.numer*this->denom+r.denom*this->numer,r.denom*this->denom);
    return result;
}

Rational operator-(const Rational& r, int i);
Rational operator-(int i, const Rational& r);

Rational operator*(const Rational& r, int i);
Rational operator*(int i, const Rational& r);

Rational operator/(const Rational& r, int i);
Rational operator/(int i, const Rational& r);


