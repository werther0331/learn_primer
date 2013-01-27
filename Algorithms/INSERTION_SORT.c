#include "Common.h" 

#include <stdio.h>
#include <stdint.h>

uint32_t insertion_sort ( int n, char * list )
{
	char key[1];
	int i;

	for ( int j = 1; j < n; ++j )
	{
		key[0] = list[j];

		i = j - 1;
		
		while( i >= 0 && list[i] <= key[0] )
		{
			list[i+1] = list[i];
			list[i] = key[0];
			i--;
		}	
	}

	return 0;
}




