#include<stdio.h>

int main(void)
{
	char arr[100];
	int i=0;
	printf("���ܾ� �Է� : ");
	scanf("%s",arr);
	
	while(arr[i]!='\0')
	{
		i++;
	}
	for(i;i>=0;i--)
	{
		printf("%c",arr[i-1]);
	}
}
