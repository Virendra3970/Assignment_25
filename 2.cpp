//Define a class to represent time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member function to set values for time and display values of time.

#include<iostream>
using namespace std;
class Time
{
  private:
    int hour, min, sec;
  public:
    void setTime(int h, int m, int s)
    {
      hour=h;
      min=m;
      sec=s;
    }
    void showTime()
    {
      cout<<hour<<"hr: "<<min<<"min: "<<sec<<"sec"<<endl;
    }
};

int main()
{
  Time t1;
  t1.setTime(3,45,20);
  t1.showTime();
  return 0;
}

