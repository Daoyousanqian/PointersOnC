/* 
*****
this question is used to copy the standard input to the standard output and also need the number of line.
****

*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int ch;
	int line = 0;
	int at_beginning = 1;
	/*  read the characters one by one */
	while((ch = getchar()) != EOF) {
		
		if (at_beginning ==1){
			
			at_beginning = 0;
			line += 1;
			printf("%d,", line);
			
		}
		
		
		putchar(ch);
		if (ch == '\n')
			at_beginning = 1;
		
	}
	
	return EXIT_SUCCESS;
	
}