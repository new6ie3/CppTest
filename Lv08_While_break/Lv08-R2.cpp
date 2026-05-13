#include <iostream>

using namespace std;

int main()
{
	char str[6] = { 'D','T','A','B','W','Q' };
	char find;

	cin >> find;

	for (int i = 0; i < 6; ++i)
	{
		if (str[i] == find)
			cout << i << "¹ø INDEX";
	}

	return 0;
}
