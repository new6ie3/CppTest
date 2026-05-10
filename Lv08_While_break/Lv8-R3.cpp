#include <iostream>

using namespace std;

int main()
{
	char str[5] = {};
	int n;

	while (true)
	{
		cin >> n;
		if (n >= 1 && n <= 5)
			break;
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> str[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << str[i] << " ";
	}

	return 0;
}
