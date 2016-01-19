#include <stdio.h>

int main() {

	char sentence[81] = {0, 0, 0, 0, 0, 0, 0, 0 } ; 	// Create a character array
	char c = 0 ;			// Variable to hold character input by user


	int alphacount = 0 ;	// Letter counter initialized 
	int count = 0 ;			// Input character count initialized
	int numcount = 0 ;		// Number counter initialized
	int symbcount = 0 ;		// Symbol counter initialized

	// Prompt user to enter a line of text
	puts("Enter a line of text") ;

	// Read in and count each entered character
	while((c = getchar()) != '\n') {

		if ( count < 80 ) {
			sentence[count++] = c ;
			switch( c ) {
				case 48: 		// Numbers 0 through 9
				case 49:
				case 50:
				case 51:
				case 52: 
				case 53:
				case 54:
				case 55:
				case 56: 
				case 57:
					
					++numcount ;
					break ;
			}

			switch( c ) {
				case 32: 		// Symbols
				case 33:
				case 34:
				case 35:
				case 36: 
				case 37:
				case 38:
				case 39:
				case 40: 
				case 41:
				case 42: 
				case 43:
				case 44: 
				case 45:
				case 46:
				case 47:
				case 58:
				case 59:
				case 60: 
				case 61:
				case 62: 
				case 63:
				case 64: 
				case 91:
				case 92:
				case 93: 
				case 94:
				case 95: 
				case 96: 
				case 123:
				case 124:
				case 125: 
				case 126:

					++symbcount ;
					break ;
			}

			switch( c ) {
				case 65:		// Capital letters
				case 66:
				case 67:
				case 68: 
				case 69:
				case 70:
				case 71:
				case 72: 
				case 73:
				case 74:
				case 75: 
				case 76:
				case 77:
				case 78: 
				case 79:
				case 80:
				case 81: 
				case 82:
				case 83:
				case 84: 
				case 85:
				case 86:
				case 87:
				case 88: 
				case 89:
				case 90:

				case 97:		// Lower case letters
				case 98:
				case 99:
				case 100: 
				case 101:
				case 102:
				case 103:
				case 104: 
				case 105:
				case 106:
				case 107: 
				case 108:
				case 109:
				case 110: 
				case 111:
				case 112:
				case 113: 
				case 114:
				case 115:
				case 116: 
				case 117:
				case 118:
				case 119:
				case 120: 
				case 121:
				case 122:

					++alphacount;			
					break ;
			}
		}

		else
			break ;					// End Switch
	}

	printf(" The quantity of characters entered is %d", count) ;
	printf("\n The quantity of numbers entered is %d", numcount) ;
	printf("\n The quantity of letters entered is %d", alphacount) ;
	printf("\n The quantity of symbols entered is %d", symbcount) ;
	puts("\n\n The characters entered in sequenced order are: \n") ;
	puts( sentence ) ;

	return 0 ;
} 