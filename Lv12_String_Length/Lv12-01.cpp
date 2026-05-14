#include <iostream>

using namespace std;

int main()
{
	char str[256];

	cin >> str;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 256; ++j)
		{
			if (str[j] == '\0')
				break;

			cout << str[j];
		}
		cout << endl;
	}

	return 0;
}
