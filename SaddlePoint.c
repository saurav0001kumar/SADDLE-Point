#include <stdio.h>
void main()
{
	int n,i,j,k,i1=0, j1=0,p,q, min=0, max=0, ctr=0,repeat ,k1;
	printf("#NOTE:\n1. A saddle point is an element of the matrix such that it is the minimum element in its row and maximum in its column. \n2. In a square matrix the number of rows & columns are equal, so the order of matrix can only be one integer 'N' instead of 'NxN'.\n");
	START:
	i1=0; j1=0,min=0,max=0,ctr=0;
	printf("\n->Enter order of square matrix (as N): ");
	scanf("%d",&n);
	int a[n][n] ;
	printf("\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n; j++)
		{
			printf("\tEnter a matrix value for Row=%d & Column=%d : ",i+1,j+1);
			scanf("%d",&a[i][j]);	
		}
			
	}
	printf("\n->Your input square-matix of order %dx%d is :\n",n,n);
	for(p=0; p<n; p++)
		{
			for(q=0; q<n; q++)
			printf(" %d ",a[p][q]);
			
			printf("\n");
		}
	for(i=0; i<n; i++)
	{
		
		for(j=0; j<n; j++)
		{
			if(j==0)
			{min=a[i][j]; i1=i; j1=j; }
			else
			if(min>a[i][j])
			{min=a[i][j]; i1=i; j1=j; }
			
		}
		
		for(k=0; k<n; k++)
		{
			if(k==0)
			{
			max=a[k][j1]; k1=k;
			}
			else
			if(a[k][j1]>max)
			{
			max=a[k][j1]; k1=k;
			}
			
		}
		
		
		
		if(max==min)
		{
		ctr=1;
		printf("\n-> %d is a Saddle Point which is minimun in it's row and maximum in it's column.\n",max);
		}
		
	}
	if(ctr==0)
	printf("\n-> NO Saddle Point found !\n");
	REPEAT:
	printf("\n1. TRY again for another Square-Matrix.\n2. EXIT Program !\n");
	scanf("%d",&repeat);
	switch(repeat)
	{
	case 1: goto START; break;
	case 2: printf("\nPress any key to EXIT !");break;
	default: printf("\nINVALID Response !\n"); goto REPEAT;
	}
	
}
