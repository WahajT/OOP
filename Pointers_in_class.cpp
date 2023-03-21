#include <iostream>
#include <string>

using namespace std;

int index(char *c, char needle)
{
	char *ptr;
	ptr = c;
	while (*c != '\0')
	{
		if (*ptr == needle)
		{
			cout << "found" << endl;
			return 0;
		}

		ptr++;
	}
}
int count_digits(char *c)
{
	char *st;
	st = c;
	int count = 0;

	while (*c != '\0')
	{
		if (*c >= '0' && *c <= '9')
		{
			count++;
		}

		c++;
	}

	return count;
}
int main()
{
	string haystack;
	char needle;

	haystack = "A quick brown fox (id: 45) jumped over a lazy dog (id: 9)";
	needle = 'j';

	int loc, count;
	loc = index(&haystack[0], needle);
	cout << "Loc: " << loc << endl;

	count = count_digits(&haystack[0]);
	cout << "Count: " << count << endl;
	return 0;
}
