#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int search(int array[], int size, int searchNumb)
{
    if (array[size] == searchNumb)
    {
        cout << "I know this number!" << endl;
        return 0;
    }
    if (size == 0)
    {
        cout << "I don`t know this number." << endl;
        return 0;
    }
    size--;
    search(array, size, searchNumb);
}

int main()
{
    srand(time(0));
    
    const int size = 10;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 15;
    }

    int searchNumb;
    cout << "Enter search numb: ";
    cin >> searchNumb;

    cout << endl << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << endl;
    
    cout << endl;
    search(array, size, searchNumb);
}