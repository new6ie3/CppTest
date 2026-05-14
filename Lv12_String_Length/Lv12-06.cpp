#include <iostream>

using namespace std;

char str[8] = { 'M', 'I', 'N', 'Q', 'U', 'E', 'S','T'};

int Length(char ch)
{
	for (int i = 0; i < 8; ++i)
	{
		if (ch == str[i])
			return i;
	}

	return -1;
}

int main()
{
	char a, b, c;
	cin >> a >> b >> c;

	int lenA = Length(a);
	int lenB = Length(b);
	int lenC = Length(c);

	cout << a << "=" << lenA << endl;
	cout << b << "=" << lenB << endl;
	cout << c << "=" << lenC << endl;
	return 0;
}