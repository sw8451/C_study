#include<stdio.h>

int main(void)
{
	char arr[]="Good time";
	int i=0;
	int arrLen = 0;
	
	arrLen = sizeof(arr) / sizeof(char);
	
	for(i=0;i<arrLen;i++)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
	printf("%s",arr);
	return 0;
}
