#include <iostream>

using namespace std;

int main()
{
	char str[5][5] = {};

	int a;
	char c;

	cin >> a >> c;

	for (int i = 4; i > -1; --i)
	{
		str[a - 1][i] = c;
		c++;
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (str[i][j] == '\0')
				cout << '0';
			else
				cout << str[i][j];
		}
		cout << endl;
	}


	return 0;
}