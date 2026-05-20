#include <iostream>

using namespace std;

int main()
{
	char str[3][3] = {};

	char ch;
	cin >> ch;

	int y = 2;
	while (y > -1)
	{
		int x = 0;
		while (x <= 2 - y)
		{
			str[y][x] = ch;

			x++;
			ch++;
		}
		y--;
	}

	y = 0;
	while (y < 3)
	{
		int x = 0;
		while (x < 3)
		{
			if (str[y][x])
				cout << str[y][x];
			else
				cout << ' ';
			x++;
		}
		cout << endl;
		y++;
	}

	return 0;
}