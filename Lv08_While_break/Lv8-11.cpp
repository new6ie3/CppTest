#include <iostream>

using namespace std;

void StarBox()
{
	for (int i = 1; i <= 20; i += 2)
	{
		cout << i << " ";
	}
}

void MacDoll()
{
	for (int i = 'H'; i >= 'A'; --i)
	{
		cout << (char)i << " ";
	}
}

void CopyBean()
{
	for (int i = -5; i <= 5; ++i)
	{
		cout << i << " ";
	}
}

int main()
{
	int input;
	cin >> input;

	if (input >= 3500 && input <= 5000)
		StarBox();
	else if (input >= 2500 && input < 3500)
		MacDoll();
	else
		CopyBean();

	return 0;
}
