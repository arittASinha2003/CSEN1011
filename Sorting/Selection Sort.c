#include <stdio.h>

void selectionSort(int arr[], int n)
{
	int i, j, min, temp;
	
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

int main()
{
	int i, j, min, n, temp, arr[100];
	
	printf("Enter number of elements\n");
	scanf("%d", &n);
	
	printf("Enter %d integers\n", n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	selectionSort(arr, n);
	
	printf("Sorted list in ascending order:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
