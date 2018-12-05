#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//1 猜数字游戏
void Test1()
{
	int i = 0;
	int j = 3;
	while (j--)   //给猜错的三次机会
	{
		srand((unsigned int)time(0));
		int num = rand() % 100 + 1;  //1-100之间的数
		printf("请输入你猜的数字(1~100)：");
		scanf_s("%d", &i);
		if (num == i)
		{
			printf("num=%d i=%d\n", num, i);
			printf("恭喜你,猜对了。\n");
			break;
		}
		else
		{
			printf("对不起，你猜错了！\n");
			printf("再来一次吧。。。\n");
		}
	}
}

//2 在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.
//二分查找
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
	printf("请输入你要查找的数字：");
	scanf_s("%d", &key);
	int ret = BinarySearch(arr,len,key);
	if (ret == -1)
	{
		printf("没找到.\n");
	}
	else
	{
		printf("找到了,下标是: %d\n",ret);
	}
	return 0;
}

//3 模拟三次密码输入的场景
void Test3()
{
	int password = 123456;
	int i = 3;
	int key;
	while (i--)
	{
		printf("请输入密码：");
		scanf_s("%d", &key);
		if (key == password)
		{
			printf("密码正确，登陆成功...\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入！\n");
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