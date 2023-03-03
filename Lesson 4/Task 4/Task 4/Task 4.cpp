#include <iostream>
#include <math.h>

using namespace std;

// Word Amount

int main()
{
    const int size = 100;
    
    char string[size];
    char test[size];
    
    int counter = 0;

    cout << "Enter the setence: ";
    cin >> string;
    
    cout << endl;

    cout << "Enter the setence: ";
    cin >> test;

    for (int i = 0; i < size; i++)
    {
        if (string[i] == NULL || test[counter] == NULL)
            break;
        
        if (string[i] >= 'A' && string[i] <= 'z')
        {
            if (string[i] == test[counter] || abs(string[i] - test[counter]) == 32)
            {
                counter++;
                if (counter == 4)
                    cout << "aoaoa";
            }
            else
                counter = 0;
        }
        
    }
}