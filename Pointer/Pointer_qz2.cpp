#include<stdio.h>

int main(void)
{
	int num1=10,num2=20;
	int *ptr1 ;
	int *ptr2 ;
	
	ptr1=&num1;
	ptr2=&num2;
	
	(*ptr1)+=10;
	(*ptr2)-=10;
	
	ptr1=&num2;
	ptr2=&num1;
	
	printf("%d %d \n %d %d",num1,num2,*ptr1,*ptr2);
	return 0; //num1 20 num2 10 ptr1 10 ptr2 20 이라생각 
 } 
