#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cout << "Enter str: ";
    cin >> str;
    
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        if (i % 2 == 0 && str[i] >= 'A' && str[i] <= 'Z')
            cout << str[i] << endl;
    }

}