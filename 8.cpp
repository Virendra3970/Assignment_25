//Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include<iostream>
using namespace std;
class Rectangle
{
 private:
  int a,b;
 public:
  void setDimension(int x,int y )
  { a=x; b=y;}
  int Area()
  {
   return a*b;
  }
};

int main()
{
 Rectangle r;
 int l,b,ar;
 cout<<"\nEnter the length and bidth of rectangle: "<<endl;
 cin>>l>>b;
 r.setDimension(l,b);
 ar=r.Area();
 cout<<"\nArea is: "<<ar<<endl;
 return 0;
}

