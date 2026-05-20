#include <iostream>

using namespace std;

int main()
{
	char str[3][10] = { "BBQWORLD", "KFCAPPLE", "LOT" };

	char ch;
	cin >> ch;

	int count = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (str[i][j] == '\0')
				break;
		
			if (str[i][j] == ch)
				count++;
		}
	}

	cout << count;

	return 0;
}