#include "rational.h"
#include <cmath>

Rational::Rational(int numerator, int denominator){
    this->numer = numerator;
    this->denom = denominator;
}

std::ostream& operator<<(std::ostream & o, const Rational & r){
    return o << r.numer << "/" << r.denom;
}

Rational::Rational(const Rational& copy){
    this->numer = copy.numer;
    this->denom = copy.denom;
}

Rational operator+(const Rational& r, int i){
    Rational result(r.numer+i*r.denom,r.denom);
    return result;
}

Rational operator+(int i, const Rational& r){
    Rational result(i*r.denom,r.denom);
    return result;
}

Rational Rational::operator+(const Rational& r) const {
    Rational result(r.numer*this->denom+r.denom*this->numer,r.denom*this->denom);
    return result;
}

Rational Rational::operator*(const Rational& r) const {
    Rational result(r.numer*this->numer, r.denom*this->denom);
    return result;
}
Rational Rational::operator-(const Rational& r) const{
    Rational result(r.numer*this->denom-this->numer*r.denom, r.denom*this->denom);
    return result;
}
Rational operator-(const Rational& r, int i){
    Rational result(r.numer-i*r.denom,r.denom);
    return result;
}
Rational operator-(int i, const Rational& r){
    Rational result(i*r.denom-r.numer,r.denom);
    return result;
}

Rational operator*(const Rational& r, int i){
    Rational result(r.numer*i,r.denom);
    return result;
}
Rational operator*(int i, const Rational& r){
    Rational result(i*r.numer,r.denom);
    return result;
}

Rational operator/(const Rational& r, int i);
Rational operator/(int i, const Rational& r);


