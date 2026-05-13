#include <iostream>

using namespace std;

int main()
{
	char str[3][3] =
	{
		{'a', 'b', 'E'},
		{'E', '2', 'W'},
		{'3', '2', '4'}
	};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
				cout << (char)(str[i][j] + 32) << ' ';
			
			if (str[i][j] >= 'a' && str[i][j] <= 'z')
				cout << (char)(str[i][j] - 32) << ' ';

			if (str[i][j] >= '0' && str[i][j] <= '9')
				cout << (char)(str[i][j] + 5) << ' ';
		}
		cout << endl;
	}

	return 0;
}