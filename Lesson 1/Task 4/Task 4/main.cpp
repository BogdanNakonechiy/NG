#include <iostream>

using namespace std;

int main()
{
    float cost = 0, prise = 0;
    cout << "Motherboard price: ";
    cin >> prise;
    cost = prise;
    cout << "Videocard price: ";
    cin >> prise;
    cost += prise;
    cout << "CPU price: ";
    cin >> prise;
    cost += prise;
    cout << "Discount: ";
    cin >> prise;
    cost -= cost * (prise / 100);
    cout << "Your PC will cost - " << cost;
    return 0;
}