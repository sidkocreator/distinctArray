#include<stdio.h>



int main()
{
		int arr1[50];
		int size;
		int i,j,flag;

		printf("\nEnter the size of the array: ");
		scanf("%d",&size);


		printf("\nEnter the elements of the array: ");

		for(i = 0;i < size;i++)
		{
			scanf("%d",&arr1[i]);
		}


		for(i = 0; i < size;i++)
		{
			for(j = i + 1; j < size; j ++)
			{
				if(arr1[i] == arr1[j])
				{
					flag = 1;
					break;
				}
			}
		}


		if(flag == 1)
		{
			printf("the array is not distinct");
		}
		else
		{
			printf("\nThe array is distinct");
		}

return 0;

}
