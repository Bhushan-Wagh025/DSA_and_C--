#include <iostream>
using namespace std;
int main()
{
    int a=165, b=8;
    int g=15;
    double n=2;
    int sum1 =  (5/ (double)2);
    //int sum = a+b; ARITHEMATIC OPERATOR line 10 to 16
    cout << "sum: " << (a+b) << endl;
      cout << "Difference: " << (a-b) << endl;
        cout << "Product: " << (a*b) << endl;
          cout << "Quotient: " << (a/b) << endl;
            cout << "Modular operator: " << (a%b) << endl; //rmainder is 0
              cout << (g/n) << endl;
                cout <<  (5/ (double)2) << endl;// type cast
                  cout << sum1 << endl; /// 
    /// Relational Operator line 19 to 23
       cout << (a<b) << endl; /// if true = 1 false =0
        cout << (a>b) << endl;
         cout << (3>=3) << endl;
          cout << (3!=3) << endl;     
           cout << (3==3) << endl; // Assignment operator
           ///Logical Operator line 25 to
           cout << (!3>1) << endl; // answer is false becuz we use explmation (!) true statement convert into false     
            cout << !(3>1) << endl;
             cout << ((3>1) || (3<1)) << endl; // || OR if any statment is true then funal is true in both are false then false
               cout << ((3>5) || (3<1)) << endl;
                   cout << ((3>5) && (3<5)) << endl;  //&& all value true then will output true
                     cout << ((3>1) && (3<5)) << endl; 
                      cout << ((3>1) && (3<2)) << endl; 
    return 0;
} // namespace std;
