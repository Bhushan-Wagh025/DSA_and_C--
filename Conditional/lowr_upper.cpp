#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter ch: ";
    cin >> ch;
    if (ch >= 'a' && ch <='z')
    {
        cout << "Lowercase\n";
    }
    else
    {
        cout << "Uppercase\n";
    }
    
    char gh;
    cout << "enter gh: ";
    cin >> gh;
    if (gh >= 'A' && gh <='Z')
    {
        cout << "Uppercase\n";
    }
    else
    {
        cout << "Lowercase\n";
    }

    char fh; // in ASCII A=65 Z=90 a=97 z=123
    cout << "enter fh: ";
    cin >> fh;
    if (fh >= 65 && fh <=90)
    {
        cout << "Uppercase\n";
    }
    else
    {
        cout << "Lowercase\n";
    }

} // namespace std;
