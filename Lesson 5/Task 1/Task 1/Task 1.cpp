#include <iostream>

using namespace std;

int cubeX(int X, int Y, int size)
{
    if (X >= size || Y >= size || X <= 1 || Y <= 1)
        cout << "*";
    else
        cout << " ";
    if (X == 1)
        return 0;
    X--;
    cubeX(X, Y, size);
}

int cubeY(int Y, int X, int size)
{
    cubeX(X, Y, size);
    cout << endl;
    Y--;
    if (Y == 0)
        return 0;
    cubeY(Y, X, size);
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    cubeY(size, size, size);

}