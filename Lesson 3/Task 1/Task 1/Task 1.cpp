#include <iostream>

using namespace std;

int main()
{
    int SizeArray, SearchNumber;
    int Array[100];

    cout << "Enter size of array: ";
    cin >> SizeArray;
    
    for (int i = 0; i < SizeArray; i++)
    {
        cout << "Enter element num " << i + 1<< ": ";
        cin >> Array[i];
    }
    
    cout << "What number you want to check:";
    cin >> SearchNumber;
    cout << endl;
    for (int i = 0; i < SizeArray; i++)
    {
        if (Array[i] == SearchNumber)
        {
            cout << "I know this number!" << endl;
            break;
        }
        if (i + 1 == SizeArray)
            cout << "I don't know this number." << endl;
    }  
}
