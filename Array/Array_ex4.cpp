#include<stdio.h>

int main(void)
{
	char str[50];
	int idx=0;
	
	printf("���ڿ� �Է�: ");
	scanf("%[^\n]",str);   // %[^\n] <- �������� ���Է¹��� (%s�� �����̽��� ġ�¼��� �Է�����)  
	printf("�Է� ���� ���ڿ�: %s \n",str);
	
	printf("���� ���� ���: ");
	while(str[idx]!='\0')
	{
		printf("%c",str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}
