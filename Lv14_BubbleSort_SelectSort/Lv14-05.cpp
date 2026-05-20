#include <iostream>

using namespace std;

int main()
{
	char str[256];
	cin >> str;

	int len = 0;
	while (true)
	{
		if (str[len] == '\0')
			break;

		len++;
	}


	for (int i = 0; i < len; ++i)
	{
		for (int j = i + 1; j < len; ++j)
		{
			if (str[i] > str[j])
			{
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	for (int i = 0; i < len; ++i)
	{
		cout << str[i];
	}

	return 0;
}