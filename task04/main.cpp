#include "logic.h"
int main()
{
	int size;

	cout << "Input your size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, 1, 10);

	cout << "Array elements: " << convert(array, size) << endl;

	reverse(array, size);

	cout << "Reverse array elements: " << convert(array, size) << endl;

	reverse(array, size);

	reverse_recursia(array, size);

	cout << "Reverse array elements (recursia): " << convert(array, size) << endl;
	delete[] array;


	return 0;
}