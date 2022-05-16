#include <iostream>

using namespace std;

int main()
{
    int sum = 0, fullnum = 0;
    double dottnum;
    cout << "Enter your number: ";
    cin >> dottnum;
    cout << endl << "Sum of even numbers are: ";
    for(int i = 0; i < 16; i++)
    {
        dottnum = dottnum / 10;
        fullnum = dottnum;
        fullnum = (dottnum - fullnum) * 10;
        if (fullnum % 2 == 0 && fullnum != 0)
        {
            if (sum > 0)
                cout << "+";
            sum += fullnum;
            cout << fullnum;
        }
    }
    cout << "=" << sum << endl;
}