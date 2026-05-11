#include <iostream>

using namespace std;

int main()
{
	char str[5][3] =
	{
		{'D', 'A', 'A'},
		{'B', 'C', 'D'},
		{'E', 'F', 'A'},
		{'A', 'A', 'D'},
		{'F', 'G', 'E'}
	};

	char input;
	cin >> input;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (input == str[i][j])
				cout << "(" << i << "," << j << ")" << endl;
		}
	}

	return 0;
}