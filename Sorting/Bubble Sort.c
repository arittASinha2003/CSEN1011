#include <stdio.h>

void swap(int *i, int *j)
{
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int n, i, arr[100];
	
	printf("Enter number of elements\n");
	scanf("%d", &n);
	
	printf("Enter %d integers\n", n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubbleSort(arr, n);
	
	printf("Sorted array: \n");
	printArray(arr, i);
	return 0;
}
