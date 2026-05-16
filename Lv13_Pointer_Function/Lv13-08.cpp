#include <iostream>

using namespace std;

struct PROFILE
{
	char name[7];
	int age;
	int weight;
};

int main()
{
	PROFILE int1;
	PROFILE int2;

	cin >> int1.name >> int1.age >> int1.weight;
	cin >> int2.name >> int2.age >> int2.weight;

	int aAvg = (int1.age + int2.age) * 0.5f;
	int wAvg = (int1.weight + int2.weight) * 0.5f;

	cout << int1.name << " & " << int2.name << endl;
	cout << "Æò±Õ" << aAvg << "¼¼" << endl;
	cout << "Æò±Õ" << wAvg << "KG" << endl;

	return 0;
}