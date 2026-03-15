#include <iostream>
using namespace std;
//function defination
int printHello(){
    cout << "Hello\n";
    return 3;
}
int main()
{
    //function call or Invoke
    printHello();
    int val = printHello();
    cout <<"val: " << val << endl;
    // cout << "Hello\n";

    // int a=1, b=3;
    // cout << (a+b);

    return 0;
} // namespace std;
