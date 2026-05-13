#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char str[14] = "StructPointer";
	char input;
	bool flag = false;

	cin >> input;

	for (int i = 0; i < 14; ++i)
	{
		if (input == str[i])
		{
			flag = true;
			break;
		}
	}

	if (flag) cout << "발견";
	else cout << "미발견";

	return 0;
}