#include <stdio.h>
#include <string.h>

int main ()
{
	int i;
	int j;
	char greetings[] = "LEEROOYYY JENKKIINNSS";
	char zero[] = "_ _ _ _ _ _";

	printf("Hello, World!\nI am learning the 'C Programming Language'\n\n");
	for (i = 0; i < sizeof(greetings); i++) {
		for (j = 0; j < sizeof(zero); j++) {
			printf("%c", greetings[i]);
		}
		printf("\n");
		printf("%s\n", zero);
	}
	printf("\n");
	return 0;
}
