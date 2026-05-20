#include <iostream>

using namespace std;

int main()
{
	char str[3][6] =
	{
		{'P', 'O', 'T', 'I', 'O', '\0'},
		{'A', 'B', 'C', 'D', 'E', '\0'},
		{'Y', 'O', 'U', 'R', 'E', '\0'}
	};

	int a, b;
	
	while (true)
	{
		cin >> a >> b;
		
		if (a <= b)
			break;
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = a; j <= b; ++j)
		{
			cout << str[i][j];
		}
	}




	return 0;
}