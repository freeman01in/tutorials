#include <iostream>
#include <stdio.h>

using namespace std;

void selectionSort(int a[], int n) 
{
	int imin; 
	for(int i = 0; i < n - 1; ++i)
	{
		imin = i; 
		
		for(int j = i + 1; j < n; ++j)
		{
			if(a[j] < a[imin])
			{
				imin = j;
			}
			
			

		}

			if(imin != i)
			{
				int tmp = a[imin];
				a[imin] = a[i];
				a[i]= tmp;
			}

		for (int k = 0; k < n; k++)
		printf("%d ",a[k]);

		printf("\n");
	}
}

int main() {
	
	int a[] = {11, 21, 41, 12, 14, 1};
	int n = sizeof(a)/sizeof(a[0]);
	
	
	selectionSort(a, n);
	
	printf("Sorted array: \n");
	
	for (int i = 0; i < n; i++)
		printf("%d ",a[i]);
	
	
	return 0;
}