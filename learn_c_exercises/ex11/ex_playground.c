#include <stdio.h>

int main(int argc, char *argv[])
{
	char *name = "Stephen";
	printf("My first name is %s.\n", name);

	char last[9] = { 'a' };

	last[0] = 'T';
	last[1] = 'a';
	last[2] = 'n';
	last[3] = 'k';
	last[4] = 's';
	last[5] = 'l';
	last[6] = 'e';
	last[7] = 'y';
	last[8] = '\0';

	printf("My last name is %s.\n", last);

	printf("My full name is %s %s.\n", name, last);

	return 0;
}
