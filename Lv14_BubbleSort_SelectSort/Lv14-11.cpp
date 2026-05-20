#include <iostream>

using namespace std;

int main()
{
	char str[2][6] = 
	{ 
		{'D', 'A', 'T', 'A', 'W', '\0'},
		{'B', 'B', 'Q', 'K', '\0','\0'}
	};

	int input;
	cin >> input;

	if (input & 1)
	{
		// Select Sort
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				if (str[0][j] == '\0')
					break;

				if (str[0][i] < str[0][j] && str[0][j] != '\0')
				{
					char temp = str[0][i];
					str[0][i] = str[0][j];
					str[0][j] = temp;
				}
			}
		}
	}
	else
	{
		// Bubble Sort
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (str[0][j] == '\0')
					break;

				if (str[1][j] > str[1][j + 1] && str[1][j + 1] != '\0')
				{
					char temp = str[1][j];
					str[1][j] = str[1][j + 1];
					str[1][j + 1] = temp;
				}
			}
		}
	}

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			cout << str[i][j];
		}
		cout << endl;
	}


	return 0;
}