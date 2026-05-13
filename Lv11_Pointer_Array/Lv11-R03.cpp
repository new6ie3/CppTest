#include <iostream>

using namespace std;

int main()
{
	char str[7] = { 'A', '1', '1', '1', '5', 'A', 'w' };
	char ch;
	int count = 0;

	cin >> ch;

	for (int i = 0; i < 7; ++i)
	{
		if (ch == str[i])
			count++;
	}

	if (count >= 3)
		cout << "THREE";
	else if (count == 2)
		cout << "TWO";
	else if (count == 1)
		cout << "ONE";
	else
		cout << "NOTHING";

	return 0;
}