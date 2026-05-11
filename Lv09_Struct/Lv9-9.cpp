#include <iostream>

using namespace std;

char str[2][3] =
{
	{'F', 'E', 'W'},
	{'D', 'C', 'A'}
};

void FindCh(char target)
{
	int count = 0;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (str[i][j] == target)
				count++;
		}
	}

	if (count) 
		cout << "발견";
	else 
		cout << "미발견";

}

int main()
{
	char input;
	cin >> input;

	FindCh(input);

	return 0;
}