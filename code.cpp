#include <iostream>
using namespace std;
int main() {

cout << "Bhushan\nWagh \n from dsa" << endl; "Helll";
int age = 25;
char grade = 'B';
float price= 100.99;
bool isSafe = false;
double prices = 1000.99;
int value = grade;
int newPrice= (int)price;
int age1;
cout << age << endl;
cout << sizeof(age) << endl; //SIZE OF STORING 4 BYTES IN RAM
cout << sizeof(grade) << endl;// 1 bytes
cout << sizeof(price) << endl; // 4 bytes
cout << isSafe << endl;
cout << sizeof(isSafe) << endl; // 1 bytes
cout << (prices) << endl;
cout << sizeof(prices) << endl;
cout << (value) << endl; //ASCII Value of B is 66 Type conversion (implicit)
cout << (newPrice) << endl;// Type casting(Explicit)
cout << "Enter your age :"<< endl;
cin >> age1; //input 
return 0;
}