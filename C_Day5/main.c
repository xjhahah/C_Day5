#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//1 猜数字游戏
void Test1()
{
	int i = 0;
	int j = 3;
	while (j--)   //给猜错的三次机会
	{
		srand((unsigned int)time(0));
		int num = rand() % 10 + 1;  //1-10之间的数
		printf("请输入你猜的数字：");
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
	printf("你真菜!!!!\n");
}

//2 在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.
void Test2()
{

}
int main()
{
	//Test1();
	Test2();
	return 0;
}