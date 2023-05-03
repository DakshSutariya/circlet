#include<stdio.h>

main()

{
	int r,c,s; 

    for(r=5;r>=1;r--)
	{
		for(s=1;s<r;s++)
		{
			printf(" ");
		}
		for(c=5;c>=r;c--)
		{
			printf("%d",c);
		}
		for(c=r;c<=4;c++)
		{
			printf("%d",c+1);
		}
		printf("\n");
	}
}

