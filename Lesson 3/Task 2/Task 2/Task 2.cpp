#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int point = 0;
    int FirstArray[4], SecondArray[4], FirstNumb = 0, SecondNumb = 0;
    for (int i = 0; i < 4; i++)
    {
        point = rand() % 9;
        FirstArray[i] = point;
        point = rand() % 9;
        SecondArray[i] = point;
    }
    point = 1000;
    for (int i = 0; i < 4; i++)
    {
        FirstNumb += FirstArray[i] * point;
        SecondNumb += SecondArray[i] * point;
        point = point / 10;
    }
    cout << "Your first array: ";
    for (int i = 0; i < 4; i++)
    {
        cout << FirstArray[i];
        cout << " ";
    }
    cout << endl << "Your second array: ";
    for (int i = 0; i < 4; i++)
    {
        cout << SecondArray[i];
        cout << " ";
    }
    cout << endl << endl;
    if (FirstNumb > SecondNumb)
        cout << FirstNumb << " > " << SecondNumb << endl;
    else
        cout << FirstNumb << " < " << SecondNumb << endl;
}