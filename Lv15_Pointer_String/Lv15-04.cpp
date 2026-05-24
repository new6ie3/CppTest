#include <iostream>

using namespace std;

bool Strcmp(char* str1, char* str2)
{
	int str1_len = 0;
	int str2_len = 0;

	for (int i = 0; i < 6; ++i)
	{
		if (str1[i] == '\0')
			str1_len = i;

		if (str2[i] == '\0')
			str2_len = i;
	}

	int max = str1_len > str2_len ? str1_len : str2_len;

	for (int i = 0; i < max; ++i)
	{
		if (str1[i] != str2[i])
			return false;
	}

	return true;
}

int main()
{
	char str1[6];
	char str2[6];

	cin >> str1 >> str2;

	bool result = Strcmp(str1, str2);

	if (result)
		cout << "같음";
	else
		cout << "다름";

	return 0;
}