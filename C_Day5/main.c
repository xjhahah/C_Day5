#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//1 ��������Ϸ
void Test1()
{
	int i = 0;
	int j = 3;
	while (j--)   //���´�����λ���
	{
		srand((unsigned int)time(0));
		int num = rand() % 100 + 1;  //1-100֮�����
		printf("��������µ�����(1~100)��");
		scanf_s("%d", &i);
		if (num == i)
		{
			printf("num=%d i=%d\n", num, i);
			printf("��ϲ��,�¶��ˡ�\n");
			break;
		}
		else
		{
			printf("�Բ�����´��ˣ�\n");
			printf("����һ�ΰɡ�����\n");
		}
	}
}

//2 ���������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.
//���ֲ���
int BinarySearch(int arr[], int len, int key)
{
	int left = 0; 
	int right = len - 1;
	while (left <= right)
	{
		int mid = left + ((right - left) >> 1);
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
int Test2()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 0;
	printf("��������Ҫ���ҵ����֣�");
	scanf_s("%d", &key);
	int ret = BinarySearch(arr,len,key);
	if (ret == -1)
	{
		printf("û�ҵ�.\n");
	}
	else
	{
		printf("�ҵ���,�±���: %d\n",ret);
	}
	return 0;
}

//3 ģ��������������ĳ���
void Test3()
{
	int password = 123456;
	int i = 3;
	int key;
	while (i--)
	{
		printf("���������룺");
		scanf_s("%d", &key);
		if (key == password)
		{
			printf("������ȷ����½�ɹ�...\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	}
}
int main()
{
	//Test1();
	//Test2();
	Test3();
	return 0;
}