#include <iostream>

using namespace std;

int main()
{
	char start;
	char end;
	int num;

	while (true)
	{
		cin >> start;
		cin >> end;
		cin >> num;

		if (start >= 'A' && start <= 'Z' && end >= 'A' && end <= 'Z')
		{
			if (start < end)
				break;
		}
	}

	for (int i = 0; i < num; ++i)
	{
		for (int j = start; j <= end; ++j)
		{
			cout << (char)j;
		}
		cout << endl;
	}

	return 0;
}