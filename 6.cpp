//Define a class Square to find the square of a number and write a C++ program to count number of times a function is called.

#include<iostream>
using namespace std;
class Square
{
 public:
   void square()
  {
   int n;
   cout<<"\nEnter a number: "<<endl;
   cin>>n;
   cout<<"\nSquare is: "<<n*n<<endl;  
  }
};
int main()
{
 Square a1;
 a1.square();
 return 0;
}
