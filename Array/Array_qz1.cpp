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
		printf("%d��° �迭���� �Է��Ͻÿ�. \n",i+1);
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
	printf("�Էµ� ���� ��  �ִ�: %d \n",max);
	printf("�Էµ� ���� �� �ּڰ�: %d \n",min);
	printf("�Էµ� ������ �� ��: %d \n",total);
	return 0;
}
