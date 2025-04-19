#include "logic.h"
int main()
{
	int size;

	cout << "Input your size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, 1, 2);

	cout << "Array elements: " << convert(array, size) << endl;

	cout << "Is array mirrowed: " << (is_mirrowed(array, size) ? "yes" : "no") << endl;

	cout << "Is array mirrowed (recursia): " << (is_mirrowed_recursia(array, size) ? "yes" : "no");
	delete[] array;


	return 0;
}