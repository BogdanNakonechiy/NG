#include <iostream>

using namespace std;

int main()
{
    int Array[21], widthArray = 0, maxNumb = 0;
    for (int i = 1; i <= 20; i++)
    {
        cout << i << " element: ";
        cin >> Array[i];
        if (Array[i] == 0)
            break;
        if (maxNumb < Array[i])
            maxNumb = Array[i];
        widthArray++;
    }
    for (int i = 1; i <= maxNumb; i++)
    {
        for (int j = 1; j <= widthArray; j++)
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