#include <stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
long int hanshu(int num);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number:");
	scanf("%d", &n);

	/* �����ִ��빦�ܽ��飺�����û��Զ��庯������f(n) */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
	Fn = hanshu(n);
	/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯���Ķ��壬��������) */
long int hanshu(int x)
{
	long int y;

	if (x > 1)
	{
		y = 2 * hanshu(x / 2) + x;  
	}
	else if (x == 1)
	{
		y = 1;
	}
	else
	{
		y = 0;
	}
	
	return y;
}