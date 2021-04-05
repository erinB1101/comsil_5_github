#include "Header.h"

int main()
{
	int s;
	printf("Choose btw 1.dog 2.deer 3.horse\n");
	scanf("%d", &s);
	
	if(s==1) dog();
	else if(s==2) deer();
	else horse();
	
	return 0;
}

