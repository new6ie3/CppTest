#include <iostream>

using namespace std;

int main()
{
	char str[6] = { 'D', 'F', 'G', 'D', 'A', 'Q' };
	char a, b;
	bool flag = false;

	cin >> a >> b;

	for (int i = 0; i < 6; ++i)
	{
		if (str[i] >= a && str[i] <= b)
		{
			flag = true;
			break;
		}
	}
	
	if (flag)
		cout << "발견!!!";
	else
		cout << "미발견!!!";

	return 0;
}