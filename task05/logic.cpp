bool is_mirrowed(int* array, int size)
{
	int first = 0;
	int last = size - 1;

	while (first < last)
	{
		if (array[first] != array[last])
		{
			return false;
		}
		first++;
		last--;
	}

	return true;
}

bool is_mirrowed_helper(int* array, int first, int last)
{
	if (first >= last)
	{
		return true;
	}

	if (array[first] != array[last])
	{
		return false;
	}

	return  is_mirrowed_helper(array, first + 1, last - 1);
}
bool is_mirrowed_recursia(int* array, int size)
{


	return  is_mirrowed_helper(array, 0, size - 1);
}
