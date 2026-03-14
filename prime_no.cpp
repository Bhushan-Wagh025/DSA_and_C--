#include <iostream>
using  namespace std;
int main()
{
    int n=14;
    bool isPrime= true;
    //for (int i = 2; i <= n-1; i++)
    for (int i = 2; i*i<= n; i++)
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }
       if(isPrime==true)
       {
       cout << "Prime No\n";
       }else{
        cout << "Non Prime No\n";
       }
       return 0;
    }
     // namespace std;
