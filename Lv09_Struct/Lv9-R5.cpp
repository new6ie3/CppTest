#include <iostream>

using namespace std;

void Input(char str[][3])
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
			cin >> str[i][j];
	}
}

void FindUpper(char str[][3])
{
	int count = 0;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
				count++;
		}
	}

	cout << "대문자" << count << "개" << endl;
}

void FindLower(char str[][3])
{
	int count = 0;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (str[i][j] >= 'a' && str[i][j] <= 'z')
				count++;
		}

	}

	cout << "소문자" << count << "개" << endl;
}


int main()
{
	char str[2][3];

	Input(str);
	FindUpper(str);
	FindLower(str);

	return 0;
}