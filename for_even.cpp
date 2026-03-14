#include <iostream>
using namespace std;
int main()
    {
    int n= 20;
    int evenSum = 0;
    for (int i = 1; i <=n; i++)
    {
       if (i % 2 == 0)// odd and even i % 2==0
    {
        evenSum +=i;
        
    } 
    
    }
    cout << "evenSum : " << evenSum << endl;
    
    
} // namespace std;
