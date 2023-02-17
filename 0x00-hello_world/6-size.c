#include <studio.h>
/**
 * main - prints the size of various types
 * Return: Always 0
*/
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
        printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printr("size of a long float:%d byte(s)\n" sizeof(float));
	return (0);
}

