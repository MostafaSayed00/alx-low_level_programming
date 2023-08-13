#include "main.h" 

char *_strncat(char *dest, const char *src , int n)
{

  int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;

    int length = (lengthD-1)+n  ;

	while (*(src + lengthS) != '\0' && (lengthD <= length ))
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	*(dest + lengthD) = '\0';
	return (dest);
    
    
}
