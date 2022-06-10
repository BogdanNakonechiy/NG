#include <iostream>

using namespace std;

int main()
{
    char firstStr[100];
    char secondStr[100];
    
    cout << "Enter your first string: ";
    cin >> firstStr;
    cout << endl << "Enter your second string: ";
    cin >> secondStr;
    
    cout << endl;

    for (int i = 0; i < sizeof(firstStr) / sizeof(firstStr[0]); i++)
    {
        if (firstStr[i] == NULL)
        {
            cout << "Second ";
            break;
        }
        
        if (secondStr[i] == NULL)
        {
            cout << "First ";
            break;
        }
    }
    
    cout << "string is bigger!" << endl;
}