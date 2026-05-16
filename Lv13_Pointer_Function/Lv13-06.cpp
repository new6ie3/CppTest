#include <iostream>

using namespace std;

int main()
{
	char str[2][6] =
	{
		'4', '5', '7', '1', '3', '2',
		'D', 'F', 'Q', 'W', 'G', 'Z'
	};

	int input;
	cin >> input;

	for (int i = 0; i < 6; ++i)
	{
		if (str[0][i] - '0' == input)
		{
			cout << str[1][i];
			break;
		}
	}

	return 0;
}