#include <iostream>

using namespace std;

int main()
{
	int Numb, HashNumb = 0;
	cout << "Enter your number: ";
	cin >> Numb;
	for (int i = Numb; i > 0; i /= 10)
	{
		if (i % 10 == (i / 10) % 10 || i == Numb % 10)
			HashNumb += i % 10;
	}
	cout << "Your hash-code is " << HashNumb << endl;
}