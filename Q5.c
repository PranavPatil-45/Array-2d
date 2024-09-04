
#include<stdio.h>
#include<conio.h>


void main() 
{
    int n1,n2, i, j;
    float sum = 0.0, average;

    
    printf("Enter number of rows: ");
    scanf("%d", &n1);
    printf("Enter number of columns: ");
    scanf("%d", &n2);

    int a[n1][n2];

   
    printf("Enter elements of the array:\n");
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
  


    printf("\nlength of the array:%d ",n1*n2);
}

