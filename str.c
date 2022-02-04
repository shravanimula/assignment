#include<stdio.h>
#include<string.h>
void copy_string(char*, char*);
int main()
{
	char source[100], target[100];    
	printf("Enter source string\n");    
	gets(source);    
	copy_string(target, source);    
	printf("Target string is %s\n", target);    
	printf("size of new string %ld\n",strlen(target));
	return 0;
}
void copy_string(char *target, char *source)
{
	while(*source)
	{
		*target = *source;        
		source++;        
		target++;
	}
		target='\0';
}

