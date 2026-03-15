#include <iostream>
using namespace std;
int main() 
{
    int n=4;
    for (int i = 0; i < n; i++)
    {
        //Top
        //Stars
        for (int j = 0; j <i+1; j++)
        {
           cout << "*";
        }
        if (i!=2*n-i)
        {
            //Spaces
            for (int j = 0; j < 2*(n-i-1); j++)
            {
                cout << " ";
            }
        }
        //Stars
        for (int j = 0; j< i+1; j++)
        {
            cout << "*";
        }
        
         cout << endl; 
    }
    //bottom
    for (int i = 0; i < n; i++)
    {
        //stars
        for (int j = 0; j < n-i; j++)
        {
           cout << "*";
        }
        if (i!=2*n-i)
        {
            //Spaces
            for (int j = 0; j < 2*i; j++)
            {
                cout << " ";
            }
            //Stars
            for (int j = 0; j < n-i; j++)
            {
                cout << "*";
            }
            
        }
        cout << endl;

    }
    
    
  
} // namespace std;
