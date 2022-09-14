//Define a class ReverseNumber and define an instance member function to reverse of a Number using class.

#include<iostream>
using namespace std;
class ReverseNumber
{
 private:
   int rem,sum=0;
 public:
  int reverse(int x) 
  {
    while(x>=1)
    {
      rem=x%10;
      sum=sum*10+rem;
      x=x/10;
    }
    return sum;
   }
};

int main()
{
 ReverseNumber a1;
 int num;
 cout<<"\nEnter a number: "<<endl;
 cin>>num;
 cout<<"\nReverse is "<<a1.reverse(num)<<endl;
 return 0;
}
