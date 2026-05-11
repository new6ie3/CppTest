#include <iostream>

using namespace std;

void BBQ(int num)
{
	for (int i = 1; i <= num; ++i)
		cout << i;
}

void KFC(char ch)
{
	for (int i = 0; i < 7; ++i)
		cout << ch;
}

int main()
{
	int input; 
	cin >> input;

	if (input & 1)
	{
		int num;
		cin >> num;

		BBQ(num);
	}
	else
	{
		char ch;
		cin >> ch;

		KFC(ch);
	}

	return 0;
}