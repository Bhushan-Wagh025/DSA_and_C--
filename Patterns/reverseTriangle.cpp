#include <iostream>
using namespace std;
int main()
{
    int n=4;
    char ch='A';
    for (int i = 0; i <n; i++)//outer loop
    {
        for (int j = i; j>=0; j--)//inner loop
        {
            ch= 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }
    
    
}