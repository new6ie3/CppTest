#include <iostream>

using namespace std;

int Length(char ch[5])
{
	for (int i = 0; i < 5; ++i)
	{
		if (ch[i] == '\0')
			return i;
	}

	return 5;
}

int main()
{
	char str[2][5];
	char result[12] = {};

	for (int i = 0; i < 2; ++i)
		cin >> str[i];

	int len0 = Length(str[0]);
	int len1 = Length(str[1]);

	for (int i = 0; i < len0 + len1; ++i)
	{
		if (i < len0)
			result[i] = str[0][i];
		else
			result[i] = str[1][i - len0];
	}


	for (int i = 0; i < len0 + len1; ++i)
		cout << result[i];

	return 0;
}