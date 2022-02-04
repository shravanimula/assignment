#include <stdio.h>
void SortArray(int Size, int* num)
{
	int i, j, temp;	
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{															if(*(num + j) < *(num + i))
			{
				temp = *(num + i);
			*(num + i) = *(num + j);
			*(num + j) = temp;
			}
		}
	}
	printf("Sorted Array elements: ");
	for(i = 0; i < Size; i++)
	{
		printf("%d  ", *(num + i));
	}	
}
int main()
{
	int Size;
	printf("Enter Array Size\n");
	scanf("%d", &Size);
	int arr[Size];
	printf("Please Enter %d elements of an Array:", Size);
	for (int i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
     	}  	
	SortArray(Size, arr);
	printf("\n");	
}

