#include "Header.h"
#define max 100

void deer()
{
	char str[max];
	FILE* src=fopen("deer.txt","r");
	
	while(fgets(str, max, src) != NULL)
	{
		puts(str);
	}
	fclose(src);
	return;
}
