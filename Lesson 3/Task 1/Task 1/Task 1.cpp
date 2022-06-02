#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int SizeArray, SearchNumber;
    bool Checking = false;
    vector <int> Array;
    
    cout << "Enter size of array: ";
    cin >> SizeArray;
    
    
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
            cout << "I know this number!" << endl;
        
        if (i == SizeArray)
            cout << "I don't know this number." << endl;
    }  
}
