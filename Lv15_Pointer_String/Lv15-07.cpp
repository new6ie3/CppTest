#include <iostream>

using namespace std;

bool Result(char* str1, char* str2)
{
	int str1_len = 0;
	int str2_len = 0;
	int t;

	for (int i = 0; i < 10; ++i)
	{
		if (str1[i] == '\0')
			str1_len = i;

		if (str2[i] == '\0')
			str2_len = i;
	}


	if (str1_len == str2_len)
		t = str1_len - 1;
	else
		return false;

	for (int i = 0; i < str1_len; ++i)
	{
		if (str1[i] != str2[t])
			return false;

		t--;
	}

	return true;
}

int main()
{
	char str1[10];
	char str2[10];

	cin >> str1 >> str2;
	
	bool result = Result(str1, str2);

	if (result)
		cout << "거울문장";
	else
		cout << "거울문장아님";

	return 0;
}