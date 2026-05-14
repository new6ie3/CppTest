#include <iostream>

using namespace std;

int main()
{
	char vect[100];
	cin >> vect;

	int len = 100;
	int count = 0;

	for (int i = 0; i < 100; ++i)
	{
		if (vect[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; ++i)
	{
		if (vect[len - 1] == vect[i])
			count++;
	}

	cout << len << endl;
	cout << count << endl;


	return 0;
}