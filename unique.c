/* Drew French */

/* Determines whether or
 * not a string has all
 * unique characters.
 */
 
 char in[50];
 int i;
 int j;
 int u = 1;
 
#include <stdio.h>
#include <string.h>

int main()
{
	printf("Enter a string: ");
	fgets(in, sizeof(in), stdin);
	
	for(i = 0; i < strlen(in); i++)
	{
		for(j = 0; j < i; j++)
		{
			if(in[i] == in[j])
			{
				u = 0;
			}
		}
	}
	
	if(u == 1)
	{
		printf("\nThis string contains all unique characters.\n");
	}
	else
	{
		printf("\nThis string does not contain all unique characters.\n");
	}
	
	return 0;
}