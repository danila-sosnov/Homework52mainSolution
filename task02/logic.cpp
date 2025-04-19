int divs(int n)
{
	int count = 0;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			count++;
		}
	}
	return count;
}

int divs_helper(int n, int i)
{
	if (i <= 1)
	{
		return 0;
	}

	if (n % i == 0)
	{
		return 1 + divs_helper(n, i - 1);
	}
	else
	{
		return divs_helper(n, i - 1);
	}
	
}
int divs_recursia(int n)
{

	return divs_helper(n, n / 2);
}