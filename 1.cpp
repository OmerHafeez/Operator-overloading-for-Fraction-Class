#include<iostream>
#include "1.h"
using namespace std;

	Fraction :: Fraction()
	{
		numerator=0;
		denumerator=1;
	}
	
	Fraction ::Fraction(int numer)
	{
		numerator=numer;
		denumerator=1;
	}
	
	Fraction :: Fraction(int numer,int denom)
	{
		while(1)
		{
		if(denom<0)
		{
			cout<<"denumerator is not valid enter it again"<<endl;
			cin>>denom;
		}
		else
		break;
		}
		numerator=numer;
		denumerator=denom;
		int check, divisor=1;
		if(numerator < denumerator)
			check=numerator;
		else
		check=denumerator;
		for (int i = 1; i <= check; i++) 
		{
        		if (numerator % i == 0 && denumerator % i == 0) 
        		    divisor = i;
	
    		}
   			numerator= numerator/divisor;
    			denumerator= denumerator/divisor;	
    	}
    
    
    
    	Fraction :: Fraction(const Fraction& cpyfrac)
	{
		numerator=cpyfrac.numerator;
		denumerator=cpyfrac.denumerator;
	}
	
	
	int Fraction :: getNumerator()
	{
		return numerator;
	}
	
	
	int Fraction :: getDenominator()
	{
		return denumerator;
	}
    
    	void Fraction :: print() 
	{
        	cout << numerator << "/" << denumerator << endl;
   	}
	
	
	
	Fraction Fraction :: operator+(const Fraction& frac) const
	{
		Fraction result;
		result.numerator = this->numerator * frac.denumerator + this->denumerator * frac.numerator;
		result.denumerator = this->denumerator * frac.denumerator;
	
		int divisor = 1,check;
			if(frac.numerator < frac.denumerator)
				check=frac.numerator;
			else
				check=frac.denumerator;
		for (int i = 1; i <= check; i++) 
		{
			if (result.numerator % i == 0 && result.denumerator % i == 0) 
					divisor = i;
		}

	
		result.numerator = result.numerator/divisor;
		result.denumerator = result.denumerator/divisor;

	//	cout << "Resultant fraction is: " << result.numerator << "/" << result.denumerator << endl;

		return result;
	}

	
	
	Fraction Fraction  :: operator-(const Fraction& frac) const
	{
		Fraction result;
		result.numerator = this->numerator * frac.denumerator - this->denumerator * frac.numerator;
		result.denumerator = this->denumerator * frac.denumerator;

		int divisor = 1,check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;	
		else
			check=frac.denumerator;
			for (int i = 1; i <= check; i++) 
			{
				if (result.numerator % i == 0 && result.denumerator % i == 0) 
				divisor = i;
			}

	
		result.numerator = result.numerator/divisor;
		result.denumerator = result.denumerator/divisor;

	//	cout << "Resultant fraction is: " << result.numerator << "/" << result.denumerator << endl;

		return result;
	}
	
	
	Fraction  Fraction :: operator*(Fraction frac)
	{
		Fraction result;
		result.numerator = this->numerator * frac.numerator;
		result.denumerator = this->denumerator * frac.denumerator;
	
		int divisor = 1;
		int check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;
		else
			check=frac.denumerator;
			for (int i = 1; i <= check; i++) 
			{
				if (result.numerator % i == 0 && result.denumerator % i == 0) 
				divisor = i;
			}
	
		result.numerator = result.numerator / divisor;
		result.denumerator = result.denumerator / divisor;

	//	cout << "Resultant fraction is: " << result.numerator << "/" << result.denumerator << endl;
	
		return result;
	}

	
	
	
	Fraction  Fraction :: operator/(Fraction frac)
	{
		Fraction result;
		result.numerator = this->numerator * frac.denumerator;
		result.denumerator = this->denumerator * frac.numerator;
		int divisor = 1,check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;
		else
			check=frac.denumerator;
			for (int i = 1; i <= check; i++) 
			{
				if (frac.denumerator % i == 0) 
				divisor = i;
			}

		frac.numerator = frac.numerator / divisor;
		frac.denumerator = frac.denumerator / divisor;

		//	cout << "Resultant fraction is: " << frac.numerator << "/" << frac.denumerator << endl;

		return frac;	
	}	

	
	
	void Fraction :: operator+=(Fraction frac)
	{
		int tempNumerator = this->numerator;
		this->numerator = this->numerator * frac.denumerator + this->denumerator * frac.numerator;
		this->denumerator = this->denumerator * frac.denumerator;

		int divisor = 1,check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;
		else
			check=frac.denumerator;

			for (int i = 1; i <= check; i++) 
			{
				if (this->denumerator % i == 0) 
					divisor = i;
			}

		this->numerator = this->numerator / divisor;
		this->denumerator = this->denumerator / divisor;

		//	cout << "Resultant fraction is: " << this->numerator << "/" << this->denumerator << endl;
	}

	
	
	void Fraction :: operator-=(Fraction frac)
	{
		int tempNumerator = this->numerator;
		this->numerator = this->numerator * frac.denumerator - this->denumerator * frac.numerator;
		this->denumerator = this->denumerator * frac.denumerator;

		int divisor = 1,check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;
		else
			check=frac.denumerator;
			for (int i = 1; i <= check; i++) 
			{
				if (this->denumerator % i == 0) 
					divisor = i;
			}

		this->numerator = this->numerator / divisor;
		this->denumerator = this->denumerator / divisor;

		//		cout << "Resultant fraction is: " << this->numerator << "/" << this->denumerator << endl;
	}
	
	
	void Fraction :: operator*=(Fraction frac)
	{
		Fraction result;
		result.numerator = this->numerator * frac.numerator;
		result.denumerator = this->denumerator * frac.denumerator;


		int divisor = 1,check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;
		else
			check=frac.denumerator;
		for (int i = 1; i <= check; i++) 
		{
			if (this->denumerator % i == 0) 
				divisor = i;
		}

		this->numerator = this->numerator / divisor;
		this->denumerator = this->denumerator / divisor;

		//	cout << "Resultant fraction is: " << this->numerator << "/" << this->denumerator << endl;
	}
	
	
	
	void Fraction ::operator/=(Fraction frac)
	{
		Fraction result;
		result.numerator = this->numerator / frac.denumerator;
		result.denumerator = this->denumerator / frac.numerator;


		int divisor = 1,check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;
		else
			check=frac.denumerator;
			for (int i = 1; i <= check; i++) 
			{
				if (this->denumerator % i == 0) 
					divisor = i;	
			}

		this->numerator = this->numerator / divisor;
		this->denumerator = this->denumerator / divisor;
	
		//	cout << "Resultant fraction is: " << this->numerator << "/" << this->denumerator << endl;
	}
	
	
	bool Fraction ::operator==(Fraction frac)
	{
		if(numerator==frac.numerator&&denumerator==frac.denumerator)
		return true; 
		else
		return false;
	}
	
	
	bool Fraction ::operator!=(Fraction frac)
	{
		if(numerator==frac.numerator&&denumerator==frac.denumerator)
		return false; 
		else
		return true;
	}
	
	
	bool Fraction ::operator<(Fraction frac)
	{
		float forthis=numerator/denumerator;
		float forcall=frac.numerator/frac.denumerator;
		if(forcall<forthis)
		return true;
		else
		return false;
	}
	
	
	
	bool Fraction ::operator>(Fraction frac)
	{
		float forthis=numerator/denumerator;
		float forcall=frac.numerator/frac.denumerator;
		if(forcall>forthis)
		return true;
		else
		return false;
	}
	
	
	bool Fraction ::operator<=(Fraction frac)
	{
		float forthis=numerator/denumerator;
		float forcall=frac.numerator/frac.denumerator;
		if(forcall<=forthis)
		return true;
		else
		return false;
	}
	
	
	
	bool Fraction :: operator>=(Fraction frac)
	{
		float forthis=numerator/denumerator;
		float forcall=frac.numerator/frac.denumerator;
		if(forcall>=forthis)
		return true;
		else
		return false;
	}
	
	
	
	Fraction Fraction :: operator++()
	{
		numerator=numerator+1;
		denumerator=denumerator+1;
		cout<<"Resultant fraction is : "<<numerator<<"/"<<denumerator<<endl;
		int check, divisor=1;
		if(numerator < denumerator)
		check=numerator;
		else
		check=denumerator;
		for (int i = 1; i <= check; i++) 
		{
		        if (numerator % i == 0 && denumerator % i == 0) 
		            divisor = i;
	    	}
   		numerator= numerator/divisor;
	    	denumerator= denumerator/divisor;
	  //  	cout<<"Resultant fraction is : "<<numerator<<"/"<<denumerator<<endl;
		return *this;
	}
	
	
	Fraction Fraction :: operator--()
	{
		numerator=numerator-1;
		denumerator=denumerator-1;
		cout<<"Resultant fraction is : "<<numerator<<"/"<<denumerator<<endl;
		int check, divisor=1;
		if(numerator < denumerator)
		check=numerator;
		else
		check=denumerator;
		for (int i = 1; i <= check; i++) 
		{
		        if (numerator % i == 0 && denumerator % i == 0) 
	            divisor = i;
	    	}
	   		numerator= numerator/divisor;
		    	denumerator= denumerator/divisor;
		 //   	cout<<"Resultant fraction is : "<<numerator<<"/"<<denumerator<<endl;
		return *this;
	}
	
	int Fraction :: operator[](bool ret)
	{
		if(ret==true)
		return denumerator;
		else
		return numerator;
	}
	
	
	Fraction Fraction :: operator->()
	{
		return *this;
	}
	
	
	Fraction Fraction :: operator&(Fraction frac)
	{
		Fraction result;
		result.numerator = this->numerator &frac.numerator;
		result.denumerator = this->denumerator & frac.denumerator;

		int divisor = 1;
		int check;
		if(frac.numerator < frac.denumerator)
			check=frac.numerator;
		else
			check=frac.denumerator;
		for (int i = 1; i <= check; i++) 
		{
			if (result.numerator % i == 0 && result.denumerator % i == 0) 
				divisor = i;
		}

		result.numerator = result.numerator / divisor;
		result.denumerator = result.denumerator / divisor;

	//	cout << "Resultant fraction is: " << result.numerator << "/" << result.denumerator << endl;
	
		return result;
	}
	
	
	
	bool Fraction :: operator&& (Fraction frac)
	{
		if(frac.numerator==0&&frac.denumerator==0)
		return false;
		else
		return true;
	}
	
	
	bool Fraction :: operator|| (Fraction frac)
	{
		if(frac.numerator==0||frac.denumerator==0)
		return false;
		else
		return true;
	}
	
	
	void Fraction :: operator()()
	{
		 cout <<"The fraction is"<<endl<< numerator << "/" << denumerator << endl;
	}
	
	
	
	
	
	
	ostream& operator<<(ostream& os, const Fraction& frac)
	{
        	os << frac.numerator << "/" << frac.denumerator;
        	return os;
	}

   
	istream& operator>>(istream& is, Fraction& frac)
	{
        	cout << "Enter numerator: ";
        	is >> frac.numerator;
        	cout << "Enter denominator: ";
        	is >> frac.denumerator;
        
        	// Validate denominator
        	while(frac.denumerator == 0)
        	{
        	    cout << "Denominator cannot be zero. Enter denominator again: ";
       		     is >> frac.denumerator;
        	}
        
        	// Simplify the fraction
        	int divisor = 1;
        	int check = frac.denumerator;
        	if (frac.numerator < frac.denumerator)
	            check = frac.numerator;
        
        	for (int i = 1; i <= check; i++) 
	        {	       
	                if (frac.numerator % i == 0 && frac.denumerator % i == 0) 
	                divisor = i;
	        }
	        frac.numerator = frac.numerator / divisor;
	        frac.denumerator = frac.denumerator / divisor;
        
	        return is;
	}
