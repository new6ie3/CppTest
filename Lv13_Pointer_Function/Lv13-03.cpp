#include <iostream>

using namespace std;

int StringLen(char* pch)
{
	int count = 0;

	while (true)
	{
		if (pch[count] == '\0')
			return count;

		count++;
	}
}

int main()
{
	char str[256];
	cin >> str;

	int len = StringLen(str);

	cout << len << "±ÛÀÚ";

	return 0;
}