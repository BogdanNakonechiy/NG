#include <iostream>

using namespace std;

int main()
{
    int Array[21], x = 0, y = 0;
    for (int i = 1; i <= 20; i++)
    {
        cout << i << " element: ";
        cin >> Array[i];
        if (Array[i] == 0)
            break;
        if (y < Array[i])
            y = Array[i];
        x++;
    }
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (Array[j] > 0)
                cout << "*";
            else
                cout << " ";
            Array[j]--;
        }
        cout << endl;
    }
    cout << endl;
}

