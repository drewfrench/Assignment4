/* Drew French */

/* Removes vowels
 * from a string.
 */

 char in[50];
 int i;
 int j = 0;
 char out[50] = "";
 
#include <stdio.h>
#include <string.h>

int main()
{
	printf("Enter a string: ");
	fgets(in, sizeof(in), stdin);
	
	for(i = 0; i < strlen(in); i++)
	{
		if(in[i] != 'A' && in[i] != 'a' && in[i] != 'E' && in[i] != 'e' && in[i] != 'I' && in[i] != 'i' && in[i] != 'O' && in[i] != 'o' && in[i] != 'U' && in[i] != 'u')
		{
			out[j] = in[i];
			j++;
		}
	}
	
	printf("\n%s\n", out);
	
	return 0;
}