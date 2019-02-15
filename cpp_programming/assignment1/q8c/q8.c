#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void delete_char(char *, char);
void main()
{
	char str1[20], ch;
	printf("Enter the string: ");
	scanf("%s",str1);
	printf("Enter character to be deleted:");
	scanf("%s", &ch);
	delete_char(str1,ch);
	printf("After deletion of character %c: %s", ch, str1);
}
void delete_char(char *s, char c)
{
	int i, j;
	for (i = 0, j = 0; i < strlen(s); i++)
	{
		if (s[i] != c)
		{
			s[j] = s[i];
			j++;
		}
		else
			i++;
	}
	s[j] = '\0';
}