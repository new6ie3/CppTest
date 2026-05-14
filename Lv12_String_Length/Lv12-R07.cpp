#include <iostream>

using namespace std;

int Length(char str[256])
{
	for (int i = 0; i < 256; ++i)
	{
		if (str[i] == '\0')
			return i;
	}

	return -1;
}

void PrintArr(char str[256], int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout << str[i];
	}
}

int main()
{
	char a[256];
	char b[256];
	char c[256];

	cin >> a >> b >> c;

	int lenA = Length(a);
	int lenB = Length(b);
	int lenC = Length(c);

	if (lenA > lenB)
	{
		if (lenA > lenC)
			PrintArr(a, lenA);
		else
			PrintArr(c, lenC);
	}
	else
	{
		if (lenB > lenC)
			PrintArr(b, lenB);
		else
			PrintArr(c, lenC);
	}

	return 0;
}