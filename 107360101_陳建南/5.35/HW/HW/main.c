#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	int i, n, t1 = 0, t2 = 1, nextTerm;
	printf("Enter the number of terms: ");
	scanf_s("%d", &n);
	printf("Fibonacci Series: ");
	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	system("pause");
	return 0;
}