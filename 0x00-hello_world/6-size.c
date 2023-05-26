#include <stdio.h>
/**
 * prints the size of various types on the computer it is compiled and run on
 * return 0
 */
int main(void)
{
	char character;
	int integer;
	long longint;
	long long longlongint;
	float floatno;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
        printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongint));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatno);

	return (0);		
}	
