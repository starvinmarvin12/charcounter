#include <stdio.h>

int main() {

	int count ;
	
	for (count = 1; count <+ 10; count++) {

		if (count == 5) {
        	continue ;
        }

        printf("%d",count) ;
	}

	printf("\nUsed continue to skip printing the value 5 \n" ) ;

	return 0 ;
} 