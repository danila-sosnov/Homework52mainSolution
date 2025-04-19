#include "logic.h"

int main()
{
	int num;
	cout << "Input your number: ";
	cin >> num;

	cout << "Is automorphic: " << (is_automorphic(num) ? "yes" : "no") << endl;
	cout << "Is automorphic (recursia): " << (is_automorphic_recursia(num) ? "yes" : "no");

	return 0;
}