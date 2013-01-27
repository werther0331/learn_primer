#include "Common.h"

#include <stdio.h>

uint32_t selection_sort( int n, char *list )
{
	int j = 0;
	char key[1];
	for( ; j < n - 1; j++ )
	{
		int i = j;
		key[0] = list[i];
		int k = i;
		for( ; i < n - 1; i++ )
		{
			k = key[0] > list[i+1] ? k : i+1 ;
			key[0] = key[0] > list[i+1] ? key[0] : list[i+1];
		}
		list[k] = list[j];
		list[j] = key[0];
	}
	
	return 0;
}

