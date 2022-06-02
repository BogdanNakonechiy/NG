#include <iostream>

using namespace std;

int main()
{
    int sum = 0, numb = 0;
    cout << "Enter your number: ";
    cin >> numb;
    cout << endl << "Sum of even numbers are: ";
    for(int i = numb; i > 0; i /= 10)
    {
        if (i % 10 % 2 == 0)
        {
            if (sum > 0)
                cout << "+";
            sum += i % 10;
            cout << i % 10;
        }
    }
    cout << "=" << sum << endl;
}