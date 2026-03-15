#include <iostream>
using namespace std;
int main()
{
     int i=1;
     int n=10;
     int oddSum = 0;
     while (i<=n)
     {
      
        if (i%2!=0)
        {
         oddSum += i;
        }
        i++;
     }
     cout << "oddSum : " << oddSum << endl; 
         
}
