#include <iostream>

using namespace std;

int main()
{
    int size, k = 0, test, counterr = 0, i = 0;
    float counter = 0;
    cout << "Enter size: ";
    cin >> size;
    test = size / 2;

    counter = size / 2;
    if (size % 2 == 0)
    {
        for (int k = counter; k >= 0; k--)
        {
            cout << " ";
        }
        cout << "*" << endl;
        counterr = 2;
    }
    else
    {
        counterr = 1;
    }
    do
    {
        for (int k = counter; k >= 0; k--)
        {
            cout << " ";
        }
        for (int i = counterr; i > 0; i--)
            cout << "*";
        counterr += 2;
        counter--;
        cout << endl;
    } while (size >= counterr);
    for (int k = test; k >= 0; k--)
    {
        cout << " ";
    }
    cout << "*" << endl;
}