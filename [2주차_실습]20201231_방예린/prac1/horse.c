#include "Header.h"
#define max 100

void horse()
{
	char str[max];
	FILE* src=fopen("horse.txt","r");
	
	while(fgets(str, max, src) != NULL)
	{
		puts(str);
	}
	fclose(src);
	return;
}
