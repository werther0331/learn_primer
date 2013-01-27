#include "Common.h"

#include <string.h>

int main ( int argc, char **argv )
{
	//Test sort algorithm
	char list[] = { 10,8 ,3 , 5 ,2 ,6, 7 };
	int n = strlen(list);
	for(int i = 0; i < n ; i++){
		printf("before sort list i(%d) = %d \n", i, list[i]);
	}

	//insertion_sort(n, list);
	selection_sort(n, list);

	for(int i = 0; i < n ; i++){
		printf("after sort list i(%d) = %d \n", i, list[i]);
	}

	return 0;
}
