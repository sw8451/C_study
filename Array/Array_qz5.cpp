#include<stdio.h>

int main(void)
{
	char arr[1000];
	int i=0;
	char max;
	
	printf("���ܾ� �Է� : ");
	scanf("%s",arr);
	
	while(arr[i]!='\0')
	{
		i++;
	}
	for(i; i>=0; i--)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}	
	}
	printf("%c",max);
}
