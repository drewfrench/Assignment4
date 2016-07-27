/* Drew French */

/* Given an array,
 * creates an output
 * array of the same
 * size where out[3]
 * = in[1] + in[2] +
 * in[3]
 */

#include <stdio.h>

int in[50];
int n;
int i;
int j;
int out[50];

int main()
{
	do
	{
		printf("How many values would you like to have in the array? (max 50): ");
		scanf("%d", &n);
		printf("\n");
	} while(n > 50 || n < 2);
	
	for(i = 0; i < n; i++)
	{
		printf("Enter value #%d: ", i + 1);
		scanf("%d", &in[i]);
		out[i] = 0;
		for(j = i; j >= 0; j--)
		{
			out[i] += in[j];
		}
	}
	
	printf("%d", out[0]);
	
	for(i = 1; i < n; i++)
	{
		printf(", %d", out[i]);
	}
	
	return 0;
}