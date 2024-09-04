
#include<stdio.h>
#include<conio.h>


void main() 
{
    int n1,n2, i, j;

   
    printf("Enter number of rows: ");
    scanf("%d", &n1);
    printf("Enter number of columns: ");
    scanf("%d", &n2);

    int a[n1][n2],b[n1][n2],c[n1][n2];

  
    printf("Enter elements of the array:\n");
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
	{
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
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
    
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
	{
          printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
     for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
	{
             c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }
    
     for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
	{
            printf("%d ",c [i][j]);
        }
        printf("\n");
    }
}
    
    

  
