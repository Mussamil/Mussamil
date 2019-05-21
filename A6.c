#include <stdio.h>

int main()
{
    char ch;


    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
    
    if(  
		ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
		    printf("\n %c is a VOWEL.", ch);
		}
	
 else if(ch == 'b'||ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' ||
		ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n'||ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' ||
		ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z'||ch == 'B'||ch == 'C' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' ||
		ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' || ch == 'N'||ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' ||
		ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z')
	 {
    	printf("\n %c is a consonant.", ch);
	}
	else
	{
	    printf("\n %c is a invalid.", ch);
	}
    return 0;
}
