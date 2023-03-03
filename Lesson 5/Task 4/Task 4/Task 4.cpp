#include <iostream>

using namespace std;

// discriminant

int input(int a = 0, int b = 0, int c = 0)
{
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;

    return a, b, c;
}

int result(int a, int b, int D)
{
    if (D < 0)
    {
        cout << endl << "No roots found." << endl;
    }
    if (D == 0)
    {
        cout << endl << "D = 0" << endl
             << "Root = " << -b / (2 * a) << endl;
    }
    if (D > 0)
    {
        cout << endl << "D > 0" << endl
             << "Root 1:" << -b - sqrt(D) / (2 * a) << endl
             << "Root 2:" << -b + sqrt(D) / (2 * a) << endl;
    }
    return 0;
}

int main()
{
    cout << endl << discriminant(a, b, c, D) << endl;
    D = pow(b, 2) - 4 * a * c;
}