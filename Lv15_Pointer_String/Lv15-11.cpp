#include <iostream>

using namespace std;

int main()
{
	char str[5][10];
	int length[5];
	int maxIdx = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> str[i];
		length[i] = 10;
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (str[i][j] == '\0')
			{
				length[i] = j;
				break;
			}
		}
	}
	
	for (int i = 0; i < 4; ++i)
	{
		if (length[i] < length[i + 1])
			maxIdx = i + 1;
	}

	for (int i = 0; i < length[maxIdx]; ++i)
		cout << str[maxIdx][i];


	return 0;
}