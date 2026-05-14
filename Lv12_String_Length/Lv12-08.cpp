#include <iostream>

using namespace std;

int main()
{
	char str[] = "DATAPOWER";
	char arr[9] = {};

	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (a <= b) 
			break;
	}

	int idx = 0;

	for (int i = a; i <= b; ++i)
	{
		arr[idx] = str[i];
		idx++;
	}

	for (int i = 0; i < 9; ++i)
	{
		if (arr[i] == '\0')
			break;

		cout << arr[i];
	}

	return 0;
}