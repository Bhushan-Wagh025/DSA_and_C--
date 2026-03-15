#include <iostream>
using namespace std;
int sumofDigit(int num){
    int digitSum = 0;
    while (num>0)
    {
        int lastDigit= num % 10;
        num= num/10;
        digitSum +=lastDigit;

    }
    return digitSum;
}

int main()
{
    // int num=1234;
    cout << "Sum of Digit: " << sumofDigit(2356)<< endl;
    return 0;
} // namespace std;
