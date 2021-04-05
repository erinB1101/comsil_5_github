#include "Header.h"
#define max 100

void dog()
{
	char str[max];
	FILE* src=fopen("dog.txt","r");
	
	while(fgets(str, max, src) != NULL)
	{
		puts(str);
	}
	fclose(src);
	return;
}
