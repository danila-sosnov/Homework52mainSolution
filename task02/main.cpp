#include "logic.h"
int main()
{
	int n;
	cout << "Input your number: ";
	cin >> n;

	cout << "Count of number divisors (without 1 and number): " << divs(n) << endl;
	cout << "Count of number divisors (without 1 and number): " << divs_recursia(n) << endl;

	return 0;
}