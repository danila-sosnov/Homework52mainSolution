#include "logic.h"
int main()
{
	string s;
	cout << "Input your line: ";
	cin >> s;

	cout << "Is the line palindrome: " << (is_palindrome(s) ? "yes" : "no") << endl;
	cout << "Is the line palindrome: " << (is_palindrome_recursia(s) ? "yes" : "no");

	return 0;
}