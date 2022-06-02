
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, D;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    D = pow(b, 2) - 4 * a * c;
    if (D < 0)
    {
        cout << endl << "No roots found." << endl;
    }
    if (D == 0)
    {
        cout << endl << "D = 0" << endl
                     << "Root = " << -b / (2 * a) << endl;
    }
    if(D > 0)
    {
        cout << endl <<  "D > 0"  << endl 
                     << "Root 1:" << -b - sqrt(D) / (2 * a) << endl
                     << "Root 2:" << -b + sqrt(D) / (2 * a) << endl;
    }
    
}
