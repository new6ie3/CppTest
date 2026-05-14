#include <iostream>

using namespace std;

char str[4][3] =
{
	{'D', 'A', 'D'},
	{'Q', 'W', 'Q'},
	{'A', 'S', 'D'},
	{'A', 'S', 'D'}
};

void Find(char find)
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (find == str[i][j])
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
	char ch;
	cin >> ch;

	Find(ch);

	return 0;
}