#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//1 ��������Ϸ
void Test1()
{
	int i = 0;
	int j = 3;
	while (j--)   //���´�����λ���
	{
		srand((unsigned int)time(0));
		int num = rand() % 10 + 1;  //1-10֮�����
		printf("��������µ����֣�");
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
	printf("�����!!!!\n");
}

//2 ���������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.
void Test2()
{

}
int main()
{
	//Test1();
	Test2();
	return 0;
}