#include <iostream>

using namespace std;

int arr[2][6] =
{
	4, 5, 6, 1, 3, 1,
	2, 1, 3, 6, 3, 6
};

void Input(int* pa, int* pb, int* pc)
{
	cin >> *pa >> *pb >> *pc;
}

void Process(int* pa, int* pb, int* pc, int* pcountA, int* pcountB, int* pcountC)
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (*pa == arr[i][j])
				(*pcountA)++;

			if (*pb == arr[i][j])
				(*pcountB)++;

			if (*pc == arr[i][j])
				(*pcountC)++;
		}
	}
}

void Output(int* pa, int* pb, int* pc, int* pcountA, int* pcountB, int* pcountC)
{
	cout << *pa << '=' << *pcountA << "°³" << endl;
	cout << *pb << '=' << *pcountB << "°³" << endl;
	cout << *pc << '=' << *pcountC << "°³" << endl;
}

int main()
{
	int a, b, c;
	int countA = 0, countB = 0, countC = 0;

	Input(&a, &b, &c);
	Process(&a, &b, &c, &countA, &countB, &countC);
	Output(&a, &b, &c, &countA, &countB, &countC);
	

	return 0;
}