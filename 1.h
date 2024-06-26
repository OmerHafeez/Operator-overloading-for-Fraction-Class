#ifndef FRACTION_H_
#define FRACTION_H_

#include<iostream>
using namespace std;
class Fraction
{
	int numerator;
	int denumerator;
	public:
		Fraction();
		Fraction(int numer);
		Fraction(int numer,int denom);
		Fraction(const Fraction& cpyfrac);
		int getNumerator();
		int getDenominator();    	
		void print() ;
    
		Fraction operator+(const Fraction& frac) const;
		Fraction operator-(const Fraction& frac) const;	
		Fraction operator*(Fraction frac);
		Fraction operator/(Fraction frac);	
		void operator+=(Fraction frac);
		void operator-=(Fraction frac);
		void operator*=(Fraction frac);
		void operator/=(Fraction frac);
		bool operator==(Fraction frac);
		bool operator!=(Fraction frac);
		bool operator<(Fraction frac);
		bool operator>(Fraction frac);
		bool operator<=(Fraction frac);
		bool operator>=(Fraction frac);
		Fraction operator++();
		Fraction operator--();
		int operator[](bool ret);
		Fraction operator->();
		Fraction operator&(Fraction frac);
		bool operator&& (Fraction frac);
		bool operator|| (Fraction frac);
		void operator()();
		friend ostream& operator<<(ostream& os, const Fraction& frac);
		friend istream& operator>>(istream& is, Fraction& frac);
		
	
};



#endif /* FRACTION_H_ */
