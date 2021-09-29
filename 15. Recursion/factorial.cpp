#include <iostream>
using namespace std;

int factorial(int n)
{

	//	base condition
	if (n == 0)
	{
		return 1;
	}

	int prevFact = factorial(n - 1);
	return n * prevFact;

	//	or
	//	return n*factorial(n-1);
}

int main()
{

	int n;
	cin >> n;

	cout << factorial(n) << endl;
	return 0;
}
