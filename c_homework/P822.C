#include <stdio.h>

#define maxNums 100

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
float Average(int chengji[], int num);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int i, n=0, scores[maxNums];
	float avgScore;

	printf("Please input scores(-1 to exit): ");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &scores[i]);
		if (-1 == scores[i])
		{
			break;
		}
		n++;
	}

	/* �����ִ��빦�ܽ��飺�����û��Զ��庯������ƽ���ɼ� */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
	avgScore = Average(scores, n);
	/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\naverage score is %.2f.\n", avgScore);
	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯���Ķ��壬��������) */
float Average(int chengji[], int num)
{
	float aver;
	int i, sum = 0;

	for (i=0; i<num; i++)
	{
		sum = sum + chengji[i];
	}
	aver = (float)sum / num;

	return aver;
}