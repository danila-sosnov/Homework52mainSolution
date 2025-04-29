#include <cmath>

int count_digits(int n)
{
	if (n == 0)
	{
		return 0;
	}

	return 1 + count_digits(n / 10);
}

int pow_of_ten(int digits)
{
	if (digits == 0)
	{
		return 1;
	}

	return 10 * pow_of_ten(digits - 1);
}



bool is_automorphic(int n)
{
	int sqr = n * n;
	int digits = count_digits(n);
	
	int lastDigits = sqr % pow_of_ten(digits);

	return lastDigits == n;
}

bool is_automorphic_helper(int n, int sqr)
{
	if (n == 0)
	{
		return true;
	}

	if (n % 10 != sqr % 10)
	{
		return false;
	}

	return  is_automorphic_helper(n / 10, sqr / 10);
}
bool is_automorphic_recursia(int n)
{
	int sqr = n * n;

	return is_automorphic_helper(n, sqr);
}




