#include <iostream>

using namespace std;

int main()
{
	int input;
	cin >> input;

	int y = 0;
	while (y < 3)
	{
		int x = 0;
		while (x < 5)
		{
			cout << input;
			x++;
		}
		cout << endl;
		y++;
	}

	return 0;
}