#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size/2 - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < i*2-1; k++)
        {
            cout << "0";
        }
        cout << endl;
    }
}