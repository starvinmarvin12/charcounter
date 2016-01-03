#include <stdio.h>

char sentence[80] ; 	// Create a character array

int main() {

	char c = 0 ;			// Variable to hold character input by user


	int count = 0 ;			// Input character count initialized

	// Prompt user to enter a line of text
	puts("Enter a line of text") ;

	// Read in and count each entered character
	while((c = getchar()) != '\n') {

	//	count++ ;
		sentence[count++] = c ;
	}

	printf(" The number of characters entered is %d", count) ;
	puts("\n The characters entered in sequenced order are:") ;
	puts( sentence ) ;
	
	return 0 ;
} 