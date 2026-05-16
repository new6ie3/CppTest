#include <iostream>

using namespace std;

int main()
{
	char str[2][7] =
	{
		{'A', 'B', 'C', 'D', 'E', 'F', 'G'},
		{'4', '2', '5', '1', '6', '7', '3'}
	};

	char start = NULL, end = NULL;
	int startIdx, endIdx;
	int result = 0;

	while (!(start >= 'A' && start <= 'G' && end >= 'A' && end <= 'G'))
	{
		cin >> start >> end;

		startIdx = start - 'A';
		endIdx = end - 'A';

		if (startIdx > endIdx)
		{
			int temp = startIdx;
			startIdx = endIdx;
			endIdx = temp;
		}
	}

	for (int i = startIdx + 1; i < endIdx; ++i)
	{
		result += str[1][i] - '0';
	}

	cout << result;

	return 0;
}