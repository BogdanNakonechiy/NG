#include <iostream>

using namespace std;

int main()
{
    int prise = 0;
    float a = 0, cost = 0;
    cout << "Motherboard price: ";
    cin >> a;
    cost = a;
    cout << "Videocard price: ";
    cin >> a;
    cost = cost + a;
    cout << "CPU price: ";
    cin >> a;
    cost = cost + a;
    cout << "Discount: ";
    cin >> a;
    cost -= cost * (a / 100);
    cout << "Your PC will cost - " << cost;
    return 0;
}