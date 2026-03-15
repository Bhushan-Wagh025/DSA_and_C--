#include <iostream>
using namespace std;
int main()
{
    int n=20;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\n";
    }
    int k = 50;
    int sum = 0;
    for(int j=1; j<=k; j++)
    {
        sum += j;
        if (j==5)
        {
            break;
        }
        
     } 
     cout << sum << endl;
        return 0;
} // namespace std;
