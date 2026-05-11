#include <iostream>

using namespace std;

int main()
{
	char str[6] = { 'A', 'F', 'G', 'A', 'B', 'C' };

	char a, b;
	int count1 = 0;
	int count2 = 0;

	cin >> a >> b;

	for (int i = 0; i < 6; ++i)
	{
		if (a == str[i])
			count1++;

		if (b == str[i])
			count2++;
	}

	if (count1 && count2)
		cout << "와2개";
	else if (!count1 && !count2)
		cout << "우0개";
	else
		cout << "오1개";


	return 0;
}