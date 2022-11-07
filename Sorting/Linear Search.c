#include <stdio.h>

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int main(void)
{
	int c, n, searchh, i, result, arr[100];
	
	printf("Enter number of elements\n");
	scanf("%d",&n);
	
	printf("Enter %d integers\n", n);
	
	for (c = 0; c < n; c++)
	{
		scanf("%d",&arr[c]);
	}
	
	printf("Enter value to find\n");
	scanf("%d", &searchh);
	
	i = sizeof(arr)/ sizeof(arr[0]);
	result = search(arr, i, searchh);
	
	(result == -1) ? printf("Element is not present in array")
				   : printf("Element is present at index %d", result);
	return 0;
}
