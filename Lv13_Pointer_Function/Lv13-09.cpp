#include <iostream>

using namespace std;

char str[3][3] =
{
	'D', 'A', 'S',
	'Q', 'W', 'V',
	'R', 'T', 'Y'
};

void Find(int x1, int x2, int y1, int y2, char* pch1, char* pch2)
{
	*pch1 = str[x1][y1];
	*pch2 = str[x2][y2];
}

int main()
{
	int x1, x2, y1, y2;
	char result1, result2;

	cin >> x1 >> y1 >> x2 >> y2;

	Find(x1, x2, y1, y2, &result1, &result2);

	cout << result1 << ' ' << result2;

	return 0;
}