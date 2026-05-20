#include <iostream>

using namespace std;

int main()
{
	char str[4][5] = {};

	for (int i = 0; i < 4; ++i)
		cin >> str[i];

	bool isA = false;
	bool isB = false;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (str[i][j] == 'A')
				isA = true;

			if (str[i][j] == 'B')
				isB = true;
		}
	}

	if (isA && isB)
		cout << "대발견";
	else if (!isA && !isB)
		cout << "미발견";
	else
		cout << "중발견";

	return 0;
}