#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, count,index;
	char a[50];
	gets(a);
	int n = strlen(a);
	int freq[n];
	for (i = 0; i < n; i++)
		freq[i] = -1;
	//count the frequency of each element
	for (i = 0; i < n; i++)
	{
		count = 1;
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				count++;
				freq[j] = 0;
			}
		}
		if (freq[i] != 0)
		{
			freq[i] = count;
		}
	}

	// printf("\nThe frequency of the elements in this Array is : \n");
	// for (i = 0; i < n; i++)
	// {
	// 	if (freq[i] != 0)
	// 	{
	// 		printf("%c Occurs %d Times \n", a[i], freq[i]);
	// 	}
	// }
	int max = freq[0];
	for (i = 1; i < n; i++)
	{
		if (max < freq[i])
		{
			max = freq[i];
			index = i;
		}
	}
	printf("%c occurs %d times", a[index], freq[index]);

	return 0;
}