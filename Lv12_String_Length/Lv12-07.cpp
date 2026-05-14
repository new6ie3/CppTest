#include <iostream>

using namespace std;

int main()
{
	char str[11];
	cin >> str;

	char a, b, c;
	cin >> a >> b >> c;

	int len = 0;
	int countA = 0;
	int countB = 0;
	int countC = 0;

	for (int i = 0; i < 10; ++i)
	{
		if (str[len] == '\0')
		{
			len = i;
			break;
		}
	}

	if (len == 0) 
		len = 10;

	for (int i = 0; i < len; ++i)
	{
		if (str[i] == a) countA++;
		if (str[i] == b) countB++;
		if (str[i] == c) countC++;
	}

	cout << a << '=' << countA << endl;
	cout << b << '=' << countB << endl;
	cout << c << '=' << countC << endl;

	return 0;
}