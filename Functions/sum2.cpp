#include <iostream>
using namespace std;
//sum of two number/pararmeters
int sum(int a, int b){//parameters
    int s= a+b;
    return s;
}
float sum_2(float a,float b){ //parameters
    float s1= a+b;
    return s1;
}
double sum3(double a,double b){//parameters
    double s3=a+b;
    return s3;
}
//minumum of two numbers
int minofTwo(int a, int b)
{
    if (a<b)
    {
        return a;
    } else
    {
        return b;
    }
}
int main()
{
  cout << sum(10,5) << endl;//arguments
  cout << sum_2(10.55,5.2200) << endl;//arguments
  cout << sum3(0.5,5.2200) << endl;//arguments
  cout << "min :" << minofTwo(5,2) << endl;//arguments
  return 0;
} // namespace std;
