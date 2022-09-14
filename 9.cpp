//Define a class Circle and an instance member function to find the area of the circle.



#include<iostream>
using namespace std;
class Circle
{
 private:
  int a;
 public:
  void setRadius(int x)
  { a=x;}
 void Area()
  {
   cout<<"\nArea is: "<<3.14*a*a<<endl;
  }
};

int main()
{
 Circle r;
 int R;
 cout<<"\nEnter the radius of the circle: "<<endl;
 cin>>R;
 r.setRadius(R);
 r.Area();
 return 0;
}

