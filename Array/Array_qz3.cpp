#include<stdio.h>

int main(void)
{
	int i=0;
	char arr[10000];
	
	printf("영단어를 입력하세요: ");
	scanf("%s",arr);
	
	while(arr[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}
