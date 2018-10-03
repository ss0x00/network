#include <stdio.h>

int main(void)
{
	int i, j;

	for(i=2; i<=5; i++) {
		for(j = 1; j <= 9; j++) {
			printf("%d * %d = %d\t", j, i, i*j);		
		}
		printf("\n");
	}
	return 0;
}				
