#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int square(int y);
	int i;
	for (i = 1;i <= 10;i++)
	{
	printf("%d ", square(i));

	}
	printf("\n");
	system("pause");
	return 0;
}
int square(int y)
{
	return y * y;
}