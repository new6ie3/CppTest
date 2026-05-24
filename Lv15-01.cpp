#include <iostream>

using namespace std;

int main()
{
	int vect[7] = { 3, 5, 1, 1, 2, 3, 2 };
	int input[4];

	for (int i = 0; i < 4; ++i)
		cin >> input[i];

	for (int i = 0; i < 4; ++i)
	{
		int count = 0;
		cout << input[i] << '=';

		for (int j = 0; j < 7; ++j)
		{
			if (input[i] == vect[j])
				count++;
		}
		cout << count << "°³" << endl;
	}

	return 0;
}