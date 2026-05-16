#include <iostream>

using namespace std;


void Find(char* pa, char* pb, int* pcountA, int* pcountB, int* pcountC)
{
	int index = 0;
	int flag = 0;

	while (true)
	{
		if (pa[index] == '\0' || pb[index] == '\0')
		{
			if (pa[index] == '\0' && pb[index] == '\0')
				return;
			else
				flag ++;

			if (flag >= 2)
				return;
		}

		if (pa[index] == 'A' || pb[index] == 'A')
		{
			if (pa[index] == 'A' && pb[index] == 'A')
				*pcountA += 2;
			else
				*pcountA += 1;
		}

		if (pa[index] == 'B' || pb[index] == 'B')
		{
			if (pa[index] == 'B' && pb[index] == 'B')
				*pcountB += 2;
			else
				*pcountB += 1;
		}

		if (pa[index] == 'C' || pb[index] == 'C')
		{
			if (pa[index] == 'C' && pb[index] == 'C')
				*pcountC += 2;
			else
				*pcountC += 1;
		}
		index++;
	}
}

int main()
{
	char a[256];
	char b[256];
	int countA = 0, countB = 0, countC = 0;

	cin >> a >> b;

	Find(a, b, &countA, &countB, &countC);

	cout << "A:" << countA << endl;
	cout << "B:" << countB << endl;
	cout << "C:" << countC << endl;

	return 0;
}