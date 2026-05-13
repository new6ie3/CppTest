#include <iostream>

using namespace std;

int main()
{
	char str[3][5] =
	{
		{'A', 'B', 'C', 'D', 'E'},
		{'E', 'A', 'B', 'A', 'B'},
		{'A', 'C', 'D', 'E', 'R'}
	};

	char input; 
	int count = 0;

	cin >> input;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (input == str[i][j])
				count++;
		}
	}

	if (count >= 3) 
		cout << "대발견";
	else if (count == 1 || count == 2) 
		cout << "발견";
	else
		cout << "미발견";

	return 0;
}