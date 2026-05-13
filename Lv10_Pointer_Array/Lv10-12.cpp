#include <iostream>

using namespace std;

char AToZ()
{
	char ch = NULL;

	while (true)
	{
		if (ch >= 'A' && ch <= 'Z')
			break;

		cin >> ch;
	}

	char toA = ch;
	char toZ = ch;

	while (true)
	{
		if (toA == 'A') return toA;
		if(toZ == 'Z') return toZ;

		toA--;
		toZ++;
	}

}

int main()
{
	char result = AToZ();

	cout << result;

	return 0;
}