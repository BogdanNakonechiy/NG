
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, D, result = 0;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    D = pow(b, 2) - 4 * a * c;
    if (D < 0)
    {
        cout << "\nNo roots found." << endl;
    }
    if (D == 0)
    {
        result = -b / (2 * a);
        cout << "\nD = 0" << endl
             << "Root = " << result << endl;
    }
    if(D > 0)
    {
        cout << "\nD > 0" << endl;
        result = -b - sqrt(D) / (2 * a);
        cout << "Root №1:" << result << endl;
        result = -b + sqrt(D) / (2 * a);
        cout << "Root №2:" << result << endl;
    }
    
}
