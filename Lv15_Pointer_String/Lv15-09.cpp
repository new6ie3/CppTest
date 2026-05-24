#include <iostream>

using namespace std;

bool Result(char* str)
{
	for (int i = 0; i < 10; ++i)
	{
		if (str[i] == '\0')
			break;

		if (i & 1)
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return false;
		}
		else
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return false;
		}
	}
	return true;
}

int main()
{
	char str[10];
	cin >> str;

	int result = Result(str);

	if (result)
		cout << "개구리문장";
	else
		cout << "일반문장";


	return 0;
}