#include <iostream>

using namespace std;

int main()
{
	int size;
	cout << "Size: ";
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			if (i > 1 && i < size)
			{
				if (j > 1 && j < size) 
					cout << " ";
				else
					cout << "*";
			}
			else
				cout << "*";

		}
		cout << endl;
	}
}