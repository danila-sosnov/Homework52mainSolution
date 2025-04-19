int get_sum_of_elements(int* array, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

int get_sum_of_elements_recursia(int* array, int size)
{

	if (!array || size <= 0)
	{
		return 0;
	}

	if (size == 1)
	{
		return array[0];
	}

	size--;
	
	return array[size] + get_sum_of_elements_recursia(array, size);
}