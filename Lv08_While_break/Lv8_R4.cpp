#include <iostream>

using namespace std;

void Input(char str[])
{
	for (int i = 0; i < 3; ++i)
	{
		char ch;
		cin >> ch;

		switch (i)
		{
		case 0:
			for (int j = 0; j <= 6; ++j)
				str[j] = ch;
			break;
		case 1:
			for (int j = 7; j <= 12; ++j)
				str[j] = ch;
			break;
		case 2:
			for (int j = 13; j <= 16; ++j)
				str[j] = ch;
			break;
		}
	}

	for (int i = 16; i >= 0; --i)
	{
		cout << str[i] << " ";
	}
}

int main()
{
	char str[17] = {};
	Input(str);

	return 0;
}