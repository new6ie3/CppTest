#include <iostream>

using namespace std;

struct Fruit
{
	int size;
	int price;
};

int main()
{
	Fruit banana;
	Fruit apple;

	cin >> banana.size >> apple.size;

	banana.price = banana.size * 250;
	apple.price = apple.size * 500;

	int result = banana.price + apple.price;
	
	cout << result << "¿ø";
	
	return 0;
}