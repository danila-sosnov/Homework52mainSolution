void reverse(int* array, int size)
{
	int first = 0;
	int last = size - 1;

	while (first < last)
	{
		int t = array[first];
		array[first] = array[last];
		array[last] = t;

		first++;
		last--;
	}
}

void reverse_helper(int* array, int first, int last)
{
	if (first >= last)
	{
		return ;
	}
	
	int t = array[first];
	array[first] = array[last];
	array[last] = t;
		
	reverse_helper(array, first + 1, last - 1);
}

void reverse_recursia(int* array, int size)
{

	reverse_helper(array, 0, size - 1);
}