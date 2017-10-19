#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	while (number < 100)
	{
		number += 1;
		if (number % 3 == 0 && number % 5 == 0)
		{
			cout << "CracklePop";
		}
		else if (number % 3 == 0)
		{
			cout << "Crackle";
		}
		else if (number % 5 == 0)
		{
			cout << "Pop";
		}
		else
		{
			cout << number;
		}
		cout << endl;
	}
	return 0;
}