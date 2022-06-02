#include <iostream>

using namespace std;

int main()
{
    int rightSize, leftSize, size;
    cout << "Enter size: ";
    cin >> size;
    leftSize = size / 2;
    rightSize = size / 2;
    cout << "l - " << leftSize << endl
         << "r - " << rightSize << endl;
    cout << endl;
    for (int y = 1; y <= size/2 + 1; y++)
    {
        for (int x = 0; x <= size; x++)
        {
            if (leftSize <= x && x <= rightSize)
                cout << "*";
            else
                cout << " ";
        }
        if(size % 2 != 0 || y != 1)
            leftSize -= 1;
        rightSize += 1;
        cout << endl;
    }
    for (int i = 0; i < size / 2; i++)
    {
        if (i < size)
            cout << " ";
        else
            cout << "*";
    }
}