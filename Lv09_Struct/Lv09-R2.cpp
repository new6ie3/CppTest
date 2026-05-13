#include <iostream>

using namespace std;

int main()
{
	char str[5];
	int count = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> str[i];

		if (str[i] == 'A')
			count++;
	}

	cout << "문자A는 " << count << "개발견" << endl;

	for (int i = 0; i < 5; ++i)
	{
		if (str[i] == 'A')
			cout << i << "번" << endl;
	}

	return 0;
}