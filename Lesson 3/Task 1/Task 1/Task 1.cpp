#include <iostream>

using namespace std;

int main()
{
    int SizeArray, SearchNumber;
    bool Checking = false;
    cout << "Enter size of array: ";
    cin >> SizeArray;
    int Array[999];
    for (int i = 1; i <= SizeArray; i++)
    {
        cout << "Enter element num " << i << ": ";
        cin >> Array[i];
    }
    cout << "What number you want to check:";
    cin >> SearchNumber;
    for (int i = 1; i <= SizeArray; i++)
    {
        if (Array[i] == SearchNumber)
        {
            Checking = true;
        }
    }
    if (Checking == true)
    {
        cout << "I know this number!" << endl;
    }
    else
        cout << "I don't know this number." << endl;
}
