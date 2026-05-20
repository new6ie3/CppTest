#include <iostream>

using namespace std;

int main()
{
	char str[2][8];

	for (int i = 0; i < 2; ++i)
		cin >> str[i];

	int count = 0;
	int len = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (str[0][i] || str[1][i])
			len = i;

		if (str[0][i] == str[1][i])
			count++;
	}
	
	int result = len - count;

	cout << result;

	return 0;
}