#include <iostream>

using namespace std;

int main()
{
	char person[7] = { 'A', 'B', 'C', 'Z', 'E', 'T', 'Q' };
	char black[5] = {};

	for (int i = 0; i < 5; ++i)
		cin >> black[i];

	for (int i = 0; i < 5; ++i)
	{
		bool result = false;
		cout << black[i] << '=';
		for (int j = 0; j < 7; ++j)
		{
			if (black[i] == person[j])
			{
				result = true;
				break;
			}
		}

		if (result)
			cout << "마을사람" << endl;
		else
			cout << "외부사람" << endl;

	}

	return 0;
}