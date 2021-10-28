#include <iostream>

using namespace std;

void ExampleFunction();
void Function();

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		ExampleFunction();
		Function();
	}

	return 0;
}

void ExampleFunction()
{
	static int counter = 0;

	counter += 3;
	cout << "Count: " << counter << endl;
}

void Function()
{
	int counter = 0;

	counter += 4;
	cout << "A Count: " << counter << endl;
}