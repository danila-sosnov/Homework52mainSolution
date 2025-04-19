#include "logic.h"



int get_line_length(string s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}
bool is_palindrome(string s)
{

	int length = get_line_length(s);

	int left = 0;
	int right = length - 1;

	while (left < right)
	{

		char a = s[left];
		char b = s[right];

		if (a != b)
		{
			return false;
		}
		left++;
		right--;
	}

	return true;
}

bool is_palindrome_helper(string s, int left, int right)
{
	
	if (left >= right)
	{
		return true;
	}

	char a = s[left];
	char b = s[right];

	if (a != b)
	{
		return false;
	}

	return is_palindrome_helper(s, left + 1, right - 1);
}

bool is_palindrome_recursia(string s)
{
	int length = get_line_length(s);

	
	
	return is_palindrome_helper(s, 0, length - 1);
	
}