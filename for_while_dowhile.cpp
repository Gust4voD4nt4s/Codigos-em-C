#include <stdio.h>

int main () {
	
	int i;
	
	printf("100 numeros usando FOR!\n");
		
	for (i = 1;i < 101;i++) {
		printf("%d,",i);
	}
	i = 1;
	printf("\n100 numeros usando while!\n");
	
	while (i != 101) {
		printf("%d,",i);
		i++;
	}
	i = 1;
	printf("\n100 numeros usando do while!\n");
	do {
		printf("%d,",i);	
		i++;
	}while (i != 101);
	return (0); 
}
