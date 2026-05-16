#include <iostream>

using namespace std;

void KFC(int* pLarge, int* pSmall)
{
	char str[10] = {};
	cin >> str;

	for (int i = 0; i < 10; ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			(*pLarge)++;

		if (str[i] >= 'a' && str[i] <= 'z')
			(*pSmall)++;
	}
}

int main()
{
	int large = 0;
	int small = 0;

	KFC(&large, &small);

	cout << "대문자" << large << "개" << endl;
	cout << "소문자" << small << "개" << endl;

	return 0;
}