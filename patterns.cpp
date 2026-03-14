#include <iostream>
using namespace std;
int main()
{
    int n=3;
     int num=1;
    char ch='A';
    for (int i = 0; i < n; i++)//n-1; i++)//outer loop
    {
       
        //char ch='A';
        //for (int j = 1; j <= i; j++)
        // for (int j = 1; j <=n; j++)//inner loop
       for (int k = 0; k <n; k++)
        
        {
            //cout << k << "* ";
            cout << ch << " ";
            cout << num << " ";
            num++;
            ch++;
        }
        cout << endl;
        cout << "after pattern: " << num << endl    ;
    }
    
    
} // namespace std;