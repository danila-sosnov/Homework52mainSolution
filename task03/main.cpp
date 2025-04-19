#include "logic.h"
int main()
{
	int size;
	
	cout << "Input your size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, 1, 10);
	
	cout << "Array elements: " << convert(array, size) << endl;

	cout << "Sum of array elements: " << get_sum_of_elements(array, size) << endl;
	cout << "Sum of array elements: " << get_sum_of_elements_recursia(array, size) << endl;

	delete[] array;

	return 0;
}