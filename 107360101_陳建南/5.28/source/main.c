#include<stdio.h>
#include<stdlib.h>


void lower_string(char*);

int main()
{
	char string[100];

	printf("Enter a string to convert it into lower case\n");
	gets(string);

	lower_string(string);

	printf("Entered string in lower case is \"%s\"\n", string);
	system("pause");
	return 0;
}

void lower_string(char* string)
{
	while (*string)
	{
		if (*string >= 'A' && *string <= 'Z')
		{
			*string = *string + 32;
		}
		string++;
	}
}