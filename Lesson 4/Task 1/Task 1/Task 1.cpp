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

    if (strlen(firstStr) > strlen(secondStr))
        cout << "First ";
    else
        cout << "Second ";
    cout << "string is bigger!" << endl;
}