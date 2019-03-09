#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С�ÿ�г�<=50�ַ�) */
int min(int data[], int n, int m);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int i, mini, tmp;
	int inputData[maxNums] = {0}, dataCount=0;  /* inputData���ڱ�����������ݣ�dataCount��¼�������ݵĸ��� */
	
	printf("\nPlease input numbers:");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &inputData[i]);
		if (endFlag == inputData[i])
		{
			break;
		}
		dataCount++;
	}

	for (i=0; i<dataCount-1; i++)
	{
		/* �����ִ��빦�ܽ��飺������Ӧ�ĺ���Ѱ�ҵ�i����С���� */
		/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
		mini = min(inputData, dataCount, i+1);
		/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

		tmp = inputData[mini];
		inputData[mini] = inputData[i];
		inputData[i] = tmp;
	}

	printf("\nOutput:\n");
	for (i=0; i<dataCount; i++)
	{
		printf("%-6d", inputData[i]);

		if (((i + 1) % 6) != 0 && i != dataCount - 1)
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}

/* �����ִ��빦�ܽ��飺��������Ѱ�ҵ�i����С���� */
/* User Code Begin(Limit: lines<=8, lineLen<=50, �������ڱ��к����Ӵ��롢���8�С�ÿ�г�<=50�ַ�) */
int min(int data[], int n, int m)
{	
	int minj = m, minv = data[m], j;
	
	for (j = m; j < n; j++)
	{
		if (data[j] < minv)
		{
			minj = j;
			minv = data[j];
		}
	}
	
	return minj;
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */
}
/* Program End(���򵽴˽������˺����������ݣ�����0��) */