#include "1.h"
#include<iostream>
using namespace std;

int main() 
{
    Fraction f1; // default constructor
    Fraction f2(3); // constructor with one parameter
    Fraction f3(4, 5); // constructor with two parameters
    Fraction f4 = f3; // copy constructor


	cout<<"f1 is:"<<endl;
    f1.print(); 
    cout<<"f2 is:"<<endl;
    f2.print();
    cout<<"f3 is:"<<endl;
    f3.print(); 
    cout<<"f4=f3 is:"<<endl;
    f4.print(); 
	cout<<"f5=f1+f2 is:"<<endl;
    Fraction f5 = f1 + f2; 
    f5.print(); 
	cout<<"f6=f3-f4 is:"<<endl;
    Fraction f6 = f3 - f4; 
    f6.print(); 
	cout<<"f7=f1*f2 is:"<<endl;
    Fraction f7 = f1 * f2; 
    f7.print(); 
	cout<<"f8=f3/f5 is:"<<endl;
    Fraction f8 = f3 / f5; 
    f8.print(); 
	cout<<"f5+=f4 is:"<<endl;	
    f5 += f4;
    f5.print();
    cout<<"f3-=f1 is:"<<endl;	
    f3 -= f1;
	f3.print();
	cout<<"f7*=f8"<<endl;
	f7*=f8;
	f7.print();
	cout<<"f3/=f5"<<endl;
	f3/=f5;
	f3.print();
	if(f3==f4)
	cout<<"f3 and f4 are equal"<<endl;
	else
	cout<<"f3 and f4 are not equal"<<endl;
	if(f6!=f2)
	cout<<"f6 and f2 are not equal"<<endl;
	else
	cout<<"f6 and f2 are equal"<<endl;
	if(f3>f4)
	cout<<"f3 is greater than f4"<<endl;
	else
	cout<<"f3 is not greater than f4"<<endl;
	if(f1>f5)
	cout<<"f1 is less than f5"<<endl;
	else
	cout<<"f1 is not less than f5"<<endl;
	if(f3>=f2)
	cout<<"f3 is less or equal to f2"<<endl;
	else
	cout<<"f3 is not less or equal to f2"<<endl;
	if(f4>=f1)
	cout<<"f4 is greater or equal to f1"<<endl;
	else
	cout<<"f4 is not greater or equal to f1"<<endl;
	cout<<"f4[1]"<<endl;
	cout<<f4[1]<<endl;
	cout<<"--f1"<<endl;
	++f1;
	f1.print();
	cout<<"--f3"<<endl;
	--f3;
	f3.print();
	cout<<"f6()"<<endl;
	f6();
	if(f7&&f8)
	cout<<"f7&&f8 is true"<<endl;
	else
	cout<<"f7&&f8 is false"<<endl;
	if(f2||f6)
	cout<<"f2||f6 is true"<<endl;
	else
	cout<<"f2||f6 is false"<<endl;
	cout<<"f8->"<<endl;
//	f8->;
	f8.print();
	cout<<"f3&f7"<<endl;
	f3&f7;
	f3.print();
	
	cout << endl;
	cout << "Insertion: \n";
	Fraction f9;
	cin >> f9;	

	cout << "Excertion: \n";
	cout << f9;
	
	cout << endl;
	
    return 0;
}
