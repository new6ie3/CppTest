#include <iostream>

using namespace std;

char str[3][3] =
{
	'A', 'D', 'F',
	'Q', 'W', 'E',
	'Z', 'X', 'C'
};

void Find(char ch, int* px, int* py)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (ch == str[i][j])
			{
				*px = i;
				*py = j;

				return;
			}
		}
	}

	*px = -1;
	*py = -1;
}

int main()
{
	int x, y;

	char input;
	cin >> input;

	Find(input, &x, &y);

	cout << x << ',' << y;

	return 0;
}