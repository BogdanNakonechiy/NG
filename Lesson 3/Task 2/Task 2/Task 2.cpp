#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int FirstArray[99], SecondArray[4];
    for (int i = 0; i < 4; i++)
    {
        FirstArray[i] = rand() % 9;
        
        SecondArray[i] = rand() % 9;
    }
    
    //cout << sizeof(FirstArray)/sizeof(FirstArray[0]) << endl;

    for (int i = 1; i <= sizeof(FirstArray) / sizeof(FirstArray[0]); i++)
    {
        cout << i << endl;
    }



    cout << endl;
}