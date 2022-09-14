//Define a class Factorial and define an instance member function to find the factorial of a given number.

#include<iostream>
using namespace std;
class Factorial
{
  public:
    int findFactorial(int num)
    {
      int fact=1;
      if(num==0 || num==1)
        return 1;
      fact=num*findFactorial(num-1);
        return fact;
    }
};

int main()
{
  Factorial F1; 
  int t,ans;
  cout<<"\nEnter a number for factorial: ";
  cin>>t;
  ans=F1.findFactorial(t);
  cout<<"\nFactorial is: "<<ans<<endl;
  return 0;
}
