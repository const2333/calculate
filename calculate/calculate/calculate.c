#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int Add(int x,int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("####################################\n");
	printf("###    1.Add             2.Sub   ###\n");
	printf("###    3.Mul             4.Div   ###\n");
	printf("###             5.Exit           ###\n");
	printf("####################################\n");
}

int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ����>");
		scanf("%d", &input);
		int (*p[])(int, int) = { 0,Add,Sub,Mul,Div };
		if (input >= 1 && input <= 4)
		{
			int x = 0;
			int y = 0;
			printf("������������������>");
			scanf("%d%d", &x, &y);
			int ret = p[input](x, y);
			printf("���Ϊ��>%d\n", ret);
		}
		else if (input == 5)
		{
			input -= 5;
			printf("�˳�!!!\n");
		}
		else if (input == 0)
		{
			input += 1;
		}
		else
		{
			printf("ѡ����󣡣�\n");
		}
	} while (input);		
	return 0;
}