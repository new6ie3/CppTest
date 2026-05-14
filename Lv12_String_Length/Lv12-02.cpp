#include <iostream>

using namespace std;

int main()
{
	char a[256];
	char b[256];

	cin >> a >> b;

	int lenA = 0;
	int lenB = 0;

	for (int i = 0; i < 256; ++i)
	{
		if (lenA && lenB)
			break;

		if (a[i] == '\0')
			lenA = i;

		if (b[i] == '\0')
			lenB = i;
	}

	cout << lenA << endl;
	cout << lenB << endl;

	return 0;
}