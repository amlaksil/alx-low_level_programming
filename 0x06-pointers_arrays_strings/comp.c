#include <stdio.h>


int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] && s2[i]) != '\0'; i++)
	{
		if (s1[i] == s2[i])
			return 0;
		else if (s1[i] > s2[i])
			return (15);
		else
			return (-15);
	}

}

int main(void)
{
	char s1[] = "ABCD";
	char s2[] = "AB";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
