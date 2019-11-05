#include<stdio.h>

int main(void)
{
	int arr[5];
	int max = arr[0];
	int min = arr[0];
	int total = 0;
	int i = 0;
	
	for(i=0;i<5;i++)
	{
		printf("%d번째 배열값을 입력하시요. \n",i+1);
		scanf("%d",&arr[i]);
		total+=arr[i];
	}
	for(i=0;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	for(i=0;i<5;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("입력된 정수 중  최댓값: %d \n",max);
	printf("입력된 정수 중 최솟값: %d \n",min);
	printf("입력된 정수의 총 합: %d \n",total);
	return 0;
}
