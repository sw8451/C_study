#include<stdio.h>

int main(void)
{
	char str[50];
	int idx=0;
	
	printf("문자열 입력: ");
	scanf("%[^\n]",str);   // %[^\n] <- 엔터제외 다입력받음 (%s는 스페이스바 치는순간 입력종료)  
	printf("입력 받은 문자열: %s \n",str);
	
	printf("문자 단위 출력: ");
	while(str[idx]!='\0')
	{
		printf("%c",str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}
