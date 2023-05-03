#include<stdio.h>

main()

{
	int r,c;

	for(r=1;r<=4;r++)
	{
	    for(c=1;c<=((2*4)-1);c++)	
	    {
	    	if(c==(4-(r-1)) || c==(4+(r-1)))
            {
            	printf("* ");
			}
			else
			{
				printf("  ");
		    }
		}
		printf("\n");
	}
}
