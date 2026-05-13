#include <iostream>

using namespace std;

char str[3][3] =
{
	{'a', 'b', 'd'},
	{'e', 'w', 'z'},
	{'q', 'v', 'a'}
};

char Input()
{
	char ch;

	while (true)
	{
		cin >> ch;
		
		if (ch >= 'A' && ch <= 'Z')
			return ch;
	}
}

void Process(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (str[i][j] == ch)
			{
				cout << "존재";
				return;
			}
		}
	}

	cout << "없음";
}

int main()
{
	char input = Input();
	Process(input);

	return 0;
}