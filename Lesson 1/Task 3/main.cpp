#include <iostream>

using namespace std;

int main()
{
    int age;
    int st;
    cout << "Enter your age:";
    cin >> age;
    if(age > 10)
    {
        cout << "Do you study? (1/0)";
        cin >> st;
        if (st == 0)
            cout << "Why?";
        else
            cout << "You are awesome!";
    }
    else
        cout << "Wow, you are so big!";
    return 0;
}
