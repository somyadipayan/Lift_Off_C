#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, totwords;
  	totwords = 1;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totwords++;	
		} 
	}	
	printf("\n The Total Number of Words in this String %s  = %d", str, totwords);
	
  	return 0;
}