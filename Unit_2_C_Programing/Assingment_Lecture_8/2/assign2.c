#include "stdio.h"

int main ()
{
	
	char alphabitcal[26];
	char *ptr ;
	ptr = alphabitcal ;
	
	int i ;
	for (i = 0 ; i < sizeof(alphabitcal); i++)
	{
		*ptr = i + 'A' ;
		ptr++;
	}
	ptr = alphabitcal ;
	for (i = 0 ; i < sizeof(alphabitcal); i++)
	{
		printf("%c\t" , *ptr);
		ptr++;
	}
	
	return 0 ;
}