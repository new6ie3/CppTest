#include <iostream>

using namespace std;

void CountLine(char str[][10])
{
	int count[3] = {};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (str[i][j] == '\0')
			{
				count[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		cout << count[i] << '=';

		for (int j = 0; j < count[i]; ++j)
		{
			cout << str[i][j];
		}

		cout << endl;
	}

}

int main()
{
	char str[3][10] = {};

	for (int i = 0; i < 3; ++i)
	{
		cin >> str[i];
	}

	CountLine(str);

	return 0;
}