#include<stdio.h>
int get_str(char* str)
{
	char* start = str;
	char* end = str;
	
	for (;*end != '\0';end++)
		;
	return   end - start;
}
int main()
{
	char arr[] = "bit hello";
	int i = get_str(arr);
	printf("%d", i);
	return 0;
}