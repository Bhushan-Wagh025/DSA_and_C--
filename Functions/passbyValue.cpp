#include <iostream>
using namespace std;
//function defination
int passbyValue(int a, int b){
    a= a+10; //15
    b= b+10; //14
    return a+b; //29
}
int changeX(int x){
        x= 2*x;
        cout << "x: " << x << endl;
}
int main()
{
    int a=5, b=4;
    int x=5;
    changeX(x);
    cout << passbyValue(a,b) << endl;
    cout << a << endl;
    cout << b << endl;
     cout << "x: " << x << endl;
    return 0;

}