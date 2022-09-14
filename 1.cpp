//Define a class Complex to represent a complex number. Declare instance member variable function to store real and imaginary parts a complex number, also define instance member functions to set values of complex number and print values of complex number.

#include<iostream>
using namespace std;
class Complex
{
  private:
    int real,imag;   		// private variables which is not accessable by Complex class object which avoids data currupt
  public:
    void setData(int x,int y) 	// instance member function
    { 
      real=x; 
      imag=y;
    }
    
    void printData()		// instance member function
    {
      cout<< real<<"+"<<imag<<"!"<<endl;  
    }
};

int main()
{
  Complex C1,C2; 	//Objects of Comlex class
  
  C1.setData(3,4);	//setData() is invoked for C1 
  
  C2.setData(5,6);	//setData() is invoked for C2
  
  C1.printData();     //printData() is invoked for C1 
  
  C2.printData();	//printData() is invoked for C2
  
  return 0;
}
