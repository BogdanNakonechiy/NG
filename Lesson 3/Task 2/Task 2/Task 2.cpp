#include <iostream>
#include <random>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    srand(time(0));
    int FirstArray[4], SecondArray[4], FirstNumb = 0, SecondNumb = 0;
    
    for (int i = 0; i < 4; i++)
    {
        FirstArray[i] = rand() % 9;
        SecondArray[i] = rand() % 9;
    }
    
    for (int i = 0; i < 4; i++)
    {
        FirstNumb += FirstArray[i] * pow(10, 3 - i);
        SecondNumb += SecondArray[i] * pow(10, 3 - i);
    }
    
    cout << endl << "FirstArray: ";
    for (int i = 0; i < 4; i++)
    {
        cout << FirstArray[i];
    }
    cout << endl;
    
    cout << "SecondArray: ";
    for (int i = 0; i < 4; i++)
    {
        cout << SecondArray[i];
    }
    cout << endl;

    cout << endl << FirstNumb;
    if (FirstNumb > SecondNumb)
        cout << " > ";
    else
        cout << " < ";
    cout << SecondNumb << endl;
}