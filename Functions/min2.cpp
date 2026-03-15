#include <iostream>
using namespace std;
//minumum of two numbers
int minofTwo(int a, int b)//parameters
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
    cout << "min :" << minofTwo(5,9) << endl;//arguments
 return 0;
} 