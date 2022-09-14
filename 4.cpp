//Define a a class LargestNumber and define an instance member function to find the Largest of three numbers using class.

#include<iostream>
using namespace std;
class LargestNumber
{
  private: 
    int a,b,c;
  public:
    int Largest(int x,int y,int z)
    {
     if(x>y && x>z)
         return x;
     else
      {
        if(y>z)
          return y;
        else
          return z;
      }
    }
};

int main()
{
 LargestNumber a1;
 int x,y,z;
 cout<<"\nEnter any three numberes: "<<endl;
 cin>>x>>y>>z;
 cout<<"\nLargest Nomber is "<<a1.Largest(x,y,z)<<endl;
 return 0;
}
