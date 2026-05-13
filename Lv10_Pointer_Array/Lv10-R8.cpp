#include <iostream>

using namespace std;

char arr[3][5] =
{
	{'D', 'A', 'C', 'C', 'D'},
	{'S', 'D', 'F', 'A', 'E'},
	{'E', 'E', 'T', 'J', 'H'}
};

int Check(char d);

void Input()
{
	char input;
	cin >> input;

	int result = Check(input);

	if (result)
		cout << "있음";
	else
		cout << "없음";
}

int Check(char d)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (d == arr[i][j])
				return 1;
		}
	}

	return 0;
}

int main()
{
	Input();

	return 0;
}