#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for (int i = 0; i <n; i++)//outer loop
    {
       //Spaces
        for (int j = 0; j <i; j++)//inner loop
        {
            cout << " ";
        }
        //numbers
        for (int j = 0; j < n-i; j++)
        {
            cout << (i+1) << " "; // add spaces its look like inverted pyramid without spaces its inverted pyramid
        }
        
        cout << endl;
    }
    
    
}