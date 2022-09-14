//Define a class Greatest and define a member function to find the largest amoung three numbers using classes.

#include<iostream>
using namespace std;
class Greatest
{
  private: 
    int a,b,c;
  public:
    int Greater(int x,int y,int z)
    {
     (x>y && x>z)return x: (y>z)?return y:return z;
    } 
};

int main()
{
 Greatest a1;
 int x,y,z;
 cout<<"\nEnter any three numberes: "<<endl;
 cin>>x>>y>>z;
 cout<<"\nGreatest Nomber is "<<a1.Greater(x,y,z)<<endl;
 return 0;
}
