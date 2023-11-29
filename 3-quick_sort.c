#include "sort.h"

void swap(int *x, int *y);
void quick_sort_recursion(int *array, int start, int end, size_t size);
int partition(int *array, int start, int end, size_t size);

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, size - 1, size);
}

void quick_sort_recursion(int *array, int start, int end, size_t size)
{
	int pivot_index;

	if (start >= end)
		return;
	pivot_index = partition(array, start, end, size);

	quick_sort_recursion(array, start, pivot_index - 1, size);
	quick_sort_recursion(array, pivot_index + 1, end, size);
}

int partition(int *array, int start, int end, size_t size)
{
	int pivot_value = array[end];
	int index = start;
	int j = 0;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[j], &array[index]);
			index++;
		}
	}
	swap(&array[index], &array[end]);
	print_array(array, size);
	return(index);
}

void swap(int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}
