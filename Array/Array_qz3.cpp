#include<stdio.h>

int main(void)
{
	int i=0;
	char arr[10000];
	
	printf("���ܾ �Է��ϼ���: ");
	scanf("%s",arr);
	
	while(arr[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}
