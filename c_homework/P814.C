#include <stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
int leijia(int shuzu[3][3]);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int num[3][3], i, j, sum;

	printf("Please input the 3x3 Matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	/* �����ִ��빦�ܽ��飺�����û��Զ��庯�����������Ԫ��֮�� */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
	sum = leijia(num);
	/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\nsum=%d\n", sum);
	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯���Ķ��壬��������) */
int leijia(int shuzu[3][3])
{
	int i, j, sum = 0;

	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			sum = sum + shuzu[i][j];
		}
	}
	return sum;
}