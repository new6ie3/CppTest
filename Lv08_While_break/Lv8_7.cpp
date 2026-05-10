#include <iostream>

using namespace std;

char Input()
{
	char input;
	cin >> input;

	return input;
}

void Output(const char result, const char str1[], const char str2[])
{
	if (result >= 'a' && result <= 'z')
	{
		for (int i = 0; i < 5; ++i)
		{
			cout << str1[i];
		}
	}
	else if (result >= 'A' && result <= 'Z')
	{
		for (int i = 0; i < 5; ++i)
		{
			cout << str2[i];
		}
	}
	else if (result >= '0' && result <= '9')
	{
		cout << "HGFEDCBA";
	}
}

int main()
{
	char str1[5] = { 'B', 'D', '5', 'Q', 'A' };
	char str2[5] = { 'Q', 'E', 'R', 'E', 'F' };
	
	char result = Input();
	Output(result, str1, str2);

	return 0;
}