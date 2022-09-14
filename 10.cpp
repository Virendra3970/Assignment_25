//Define a class Area and define instance member function to find the area of the different shapes like square, rectangle, circle e.t.c.


#include<iostream>
#include<math.h>
using namespace std;
class Area
{
 private:
  int a,b,c,d;
 public:
   void areaTriangle()
   {
    cout<<"\nEnter the sides of the triangle"<<endl;
    cin>>a>>b>>c;
    float s=(a+b+c)/2;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"\nArea is: "<< ar<<endl;
   }
   void areaRectangle()
   {
    cout<<"\nEnter the length and bidth of rectangle: "<<endl;
    cin>>a>>b;
    cout<<"\nArea is: "<< a*b<<endl;
   }
  void areaCircle()
   {
    cout<<"\nEnter the radius: "<<endl;
    cin>>a;
    cout<<"\nArea is: "<<3.14*a*a<<endl;
   }
   void areaSquare()
   {
    cout<<"\nEnter the side length: "<<endl;
    cin>>a;
    cout<<"\nArea is: "<<a*a<<endl;
   }
};
int main()
{
  Area ar1;
  int key;
  while(1)
 {
  cout<<"\n1. Area of triangle "<<endl;
  cout<<"\n2. Area of Square "<<endl;
  cout<<"\n3. Area of rectangle "<<endl;
  cout<<"\n4. Area of Circle "<<endl;
  cout<<"\n5. Exit "<<endl;
  cout<<"\nEnter your choice: "<<endl;
  cin>>key;
  switch(key)
  {
   case 1:
      ar1.areaTriangle();
      break;
   case 2:
      ar1.areaSquare();
      break;
   case 3:
     ar1.areaRectangle();
     break;
   case 4:
     ar1.areaCircle();
     break;
   case 5:
     exit(0);
     break;
   default :
     cout<<"\nPlase Enter a valid choice "<<endl;
 }
 }
 return 0;
}

